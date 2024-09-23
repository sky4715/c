/*1차원 배열 초기화
크기가 5인 정수형 1차원 배열을 선언하고 모든 원소를 7로 초기화한 뒤 가장 마지막 원소를 출력하시오.*/
#include <stdio.h>

int main(void){
    int arr[5] = {7, 7, 7, 7, 7};

    printf("%d", arr[4]);
    return 0;
}