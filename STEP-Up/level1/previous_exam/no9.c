#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int sum = 0;  // 정수형 변수 sum을 선언하고 0으로 초기화
    int arr[5] = {1, 1, 1, 1, 1};  // 정수형 배열 arr을 선언하고 처음 5개의 값을 모두 1로 초기화
    scanf("%d %d", &arr[3], &arr[4]);  // 사용자로부터 두 값을 입력받아 arr[3]과 arr[4]에 저장

    // 배열 arr의 모든 값을 합산
    for(int i = 0; i < 5; i++){  // i는 0부터 4까지 반복
        sum += arr[i];  // 배열의 각 원소를 sum에 더함
    }
    
    printf("%d", sum);  // 합산된 값 sum을 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}

