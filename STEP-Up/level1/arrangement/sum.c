/*1차원 배열을 함수 매개변수로 전달
정수 1개를 입력받아 모든 원소가 입력받은 정수를 가지고 크기가 5인 정수형 1차원 배열을 선언한 뒤, 배열의 모든 원소의 합을 구해주는 sum() 함수를 만들어 모든 원소의 합을 출력하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int sum(int arr[]){  // 정수 배열 arr의 요소 합을 반환하는 sum 함수
    int result = 0;  // 결과를 저장할 변수 result를 0으로 초기화

    for(int i = 0;  i < 5; i++)  // i가 0에서 4까지 증가하며 반복
        result += arr[i];  // 배열 arr의 각 요소를 result에 더함
    return result;  // 배열의 모든 요소 합을 반환
}

int main(void){  // main 함수 - 프로그램의 시작 지점
    int num;  // 사용자 입력을 저장할 정수형 변수 num
    scanf("%d", &num);  // 사용자로부터 정수를 입력받아 num에 저장
    int arr[5];  // 크기가 5인 정수형 배열 arr을 선언

    for(int i = 0; i < 5; i++)  // i가 0에서 4까지 증가하며 반복
        arr[i] = num;  // 배열 arr
}