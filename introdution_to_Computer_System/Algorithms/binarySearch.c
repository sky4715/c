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

// 이진 검색 함수
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2; // 배열의 중앙 찾기
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // 값이 없으면 -1 반환
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

    // 배열 정렬
    insertionSort(arr, n);

    // 정렬된 배열 출력
    printf("정렬된 정수 시퀀스: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 찾고자 하는 값 입력
    printf("찾고자 하는 수: ");
    scanf("%d", &target);

    // 이진 검색
    int result = binarySearch(arr, n, target);

    // 결과 출력
    if (result != -1)
        printf("위치: %d\n", result);
    else
        printf("위치: -1\n");

    return 0;
}

