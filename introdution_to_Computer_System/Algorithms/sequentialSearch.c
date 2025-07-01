#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { 
        int key = arr[i]; 
        int j = i - 1;

        // key보다 큰 값을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 이진 탐색
int sequentialSearch(int arr[], int n, int x) {
    if (n < 1) // 배열 크기가 0 이하일 때
        return -1;

    int index = 0; // 탐색 시작 위치
    while (index < n && arr[index] <= x) { // 범위 내에서 x와 비교
        if (arr[index] == x) // 값이 일치하면
            return index;    // 현재 위치 반환
        index++;
    }
    return -1; // 찾지 못한 경우
}


int main() {
    int n, target;

    // 배열 크기 입력
    printf("입력(N): ");
    scanf("%d", &n);

    // 배열 생성 및 난수 초기화
    int arr[n];
    srand(time(0));
    printf("생성된 정수 시퀀스: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1; // 1~100 범위의 난수 생성
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 삽입 정렬
    insertionSort(arr, n);

    // 정렬된 배열 출력
    printf("정렬된 정수 시퀀스: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 찾고자 하는 수 입력
    printf("찾고자 하는 수: ");
    scanf("%d", &target);

    // 순차 탐색
    int result = sequentialSearch(arr, n, target);

    // 결과 출력
    if (result != -1)
        printf("위치: %d\n", result);
    else
        printf("위치: -1\n");

    return 0;
}
