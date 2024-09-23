/*1차원 배열 원소의 입출력
크기가 5인 정수형 1차원 배열을 선언하고 모든 원소를 입력 받은 후, 원소의 역순으로 출력하시오.*/
#include <stdio.h>

int main(void){
    int arr[5];

    for(int a = 0; a < 5; a++)
        scanf("%d", &arr[a]);
    
    for(int a = 4; a >= 0; a--)
        printf("%d ", arr[a]);
    
    return 0;
}