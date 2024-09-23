/*1차원 배열을 함수 매개변수로 전달
정수 1개를 입력받아 모든 원소가 입력받은 정수를 가지고 크기가 5인 정수형 1차원 배열을 선언한 뒤, 배열의 모든 원소의 합을 구해주는 sum() 함수를 만들어 모든 원소의 합을 출력하시오.*/
#include <stdio.h>

void sum(int arr[]){
    int result = 0;

    for(int i = 0;  i < 5; i++)
        result += arr[i];
    return result;
}
int main(void){
    int num;
    scanf("%d", num);
    int arr[5];
    for(int i = 0; i < 5; i++)
        arr[i] = num;
    sum(arr);
    return 0;
}