/**********************************
소프트웨어학부 2024042053 김여민
11주차 과제
주어진 조건에서 최댓값과 최솟값 찾는 프로그램
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
    int num[SIZE]={0}; //10의 크기를 갖는 배열변수
    int max=0, min=0; //최댓값, 최솟값을 저장할 변수

    srand((unsigned)time(NULL));
    for(int i=0; i<SIZE; i++){
    //배열의 각 요소값을 1부터 100사이의 랜덤수를 입력하고 입력된 수를 출력하시오.
        num[i] = rand() % 100;
        printf("%d\t", num[i]);
    }
    min=num[0]; //최솟값을 배열 첫 번째 요소의 값이라고 가정
    max=num[0]; //최댓값을 배열 첫 번째 요소의 값이라고 가정

    //반복문을 이용하여 최댓값과 최솟값을 찾아 변수(max, min)에 저장하시오.
    for(int i = 1; i < SIZE; i++){
        if(num[i] < min)
            min = num[i];
        if(num[i] > max)
            max = num[i];
    }
    printf("\nmin:%d, max:%d", min, max); //최솟값과 최댓값 출력

    return 0;
}