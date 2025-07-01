/*
소프트웨어학부 2024042053 김여민
(주제) 다익스트라 알고리즘을 사용하여 가중치가 2개인 그래프의 최적 경로 찾기
(작동 방법) input.txt와 실행파일을 동일 디렉토리에 두고
터미널에서 ./graph input.txt output.txt 실행 시 output.txt 생성
*/

#include <stdio.h>   // 표준 입출력 라이브러리
#include <stdlib.h>  // 동적 메모리 할당에 필요한 함수
#include <float.h>   // DBL_MAX 값 사용

// ----------------------------- 구조체 정의 -----------------------------

// 간선 정보를 저장하는 구조체
typedef struct {
    int to;          // 도착 정점 번호
    double w1;       // 가중치 1
    double w2;       // 가중치 2
} Edge;

// 정점 정보를 저장하는 구조체
typedef struct {
    Edge* edges;     // 해당 정점에서 나가는 간선 배열
    int count;       // 현재 간선 수
    int capacity;    // 배열의 전체 용량
} Node;

// ----------------------------- 전역 변수 -----------------------------

Node* graph = NULL;  // 전체 정점 배열
int node_count = 0;  // 총 정점 수
int start = 0;       // 시작 정점 번호
int target = 0;      // 도착 정점 번호

// ----------------------------- 함수 정의 -----------------------------

// 정점 배열 초기화 함수
void init_graph(int n) {
    // n개의 정점 + 1 (1-based index)
    graph = (Node*)malloc((n + 1) * sizeof(Node));

    if (graph == NULL) {
        printf("그래프 메모리 할당 실패\n");
        exit(1);  // 프로그램 종료
    }

    for (int i = 1; i <= n; i++) {
        graph[i].edges = NULL;     // 초기 간선 없음
        graph[i].count = 0;        // 간선 수 0
        graph[i].capacity = 0;     // 용량 0
    }
}

// 간선 삽입 함수
void add_edge(int from, int to, double w1, double w2) {
    int current = graph[from].count;       // 현재 간선 수
    int max_size = graph[from].capacity;   // 현재 배열 용량

    // 간선 배열이 꽉 찼을 경우 리사이징
    if (current == max_size) {
        int new_capacity;
        if (max_size == 0) new_capacity = 4;
        else new_capacity = max_size * 2;

        Edge* temp = (Edge*)realloc(graph[from].edges, new_capacity * sizeof(Edge));
        if (temp == NULL) {
            printf("간선 메모리 재할당 실패\n");
            exit(1);
        }

        graph[from].edges = temp;
        graph[from].capacity = new_capacity;
    }

    // 새로운 간선 정보 삽입
    graph[from].edges[current].to = to;
    graph[from].edges[current].w1 = w1;
    graph[from].edges[current].w2 = w2;
    graph[from].count++;  // 간선 수 증가
}

// 다익스트라 알고리즘 함수
double run_dijkstra(double alpha, int* prev) {
    double* dist = (double*)malloc((node_count + 1) * sizeof(double));
    int* visited = (int*)malloc((node_count + 1) * sizeof(int));

    if (dist == NULL || visited == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }

    // 초기화
    for (int i = 0; i <= node_count; i++) {
        dist[i] = DBL_MAX;
        visited[i] = 0;
        prev[i] = -1;
    }

    dist[start] = 0;

    // 정점 수만큼 반복
    for (int i = 1; i <= node_count; i++) {
        int u = -1;
        double min_dist = DBL_MAX;

        // 방문하지 않은 정점 중 최소 거리 찾기
        for (int j = 1; j <= node_count; j++) {
            if (!visited[j] && dist[j] < min_dist) {
                u = j;
                min_dist = dist[j];
            }
        }

        // 더 이상 진행할 정점이 없다면 중단
        if (u == -1) break;

        visited[u] = 1;

        // u에서 나가는 모든 간선에 대해 갱신
        for (int k = 0; k < graph[u].count; k++) {
            Edge e = graph[u].edges[k];
            int v = e.to;
            double w1 = e.w1;
            double w2 = e.w2;
            double weight = alpha * w1 + (1 - alpha) * w2;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                prev[v] = u;
            }
        }
    }

    double result;
    if (dist[target] == DBL_MAX)
        result = 0.0;  // 도달 불가
    else
        result = dist[target];  // 최단 경로 거리

    free(dist);
    free(visited);
    return result;
}

// 경로 출력 함수
void print_path(FILE* out, int* prev) {
    int* path = (int*)malloc((node_count + 1) * sizeof(int));
    int length = 0;
    int current = target;

    while (current != -1) {
        path[length++] = current;
        current = prev[current];
    }

    if (length == 1 && path[0] != start) {
        fprintf(out, "Path: 없음\n");
    } else {
        fprintf(out, "Path: ");
        for (int i = length - 1; i >= 0; i--) {
            fprintf(out, "%d", path[i]);
            if (i > 0) fprintf(out, "-");
        }
        fprintf(out, "\n");
    }

    free(path);
}

// 그래프 해제 함수
void destroy_graph() {
    for (int i = 1; i <= node_count; i++) {
        free(graph[i].edges);
    }
    free(graph);
}

// ----------------------------- 메인 함수 -----------------------------

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("사용법: %s input.txt output.txt\n", argv[0]);
        return 1;
    }

    FILE* in = fopen(argv[1], "r");
    if (!in) {
        printf("입력 파일을 열 수 없습니다.\n");
        return 1;
    }

    // 정점 수, 시작 정점, 도착 정점 읽기
    fscanf(in, "%d,%d,%d\n", &node_count, &start, &target);

    // 그래프 생성
    init_graph(node_count);

    // 간선 정보 읽기
    int u, v;
    double w1, w2;

    while (fscanf(in, "(%d,%d,%lf,%lf)\n", &u, &v, &w1, &w2) == 4) {
        add_edge(u, v, w1, w2);
    }

    fclose(in);

    FILE* out = fopen(argv[2], "w");
    if (!out) {
        printf("출력 파일을 열 수 없습니다.\n");
        return 1;
    }

    // alpha: 0.0부터 1.0까지 0.1 간격으로 변경
    for (int i = 0; i <= 10; i++) {
        double alpha = i / 10.0;
        double beta = 1.0 - alpha;

        int* prev = (int*)malloc((node_count + 1) * sizeof(int));
        if (prev == NULL) {
            printf("경로 배열 할당 실패\n");
            return 1;
        }

        double cost = run_dijkstra(alpha, prev);

        // 가중치와 비용 출력
        if (i == 0)
            fprintf(out, "(0, 1, %d)\n", (int)(cost + 0.5));
        else if (i == 10)
            fprintf(out, "(1, 0, %d)\n", (int)(cost + 0.5));
        else
            fprintf(out, "(%.1lf, %.1lf, %d)\n", alpha, beta, (int)(cost + 0.5));

        // 경로 출력
        print_path(out, prev);
        free(prev);
    }

    fclose(out);
    destroy_graph();
    return 0;
}

