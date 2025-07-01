/**********************************
소프트웨어학부 2024042053 김여민
11주차 실습
선택 정렬
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#define SIZE 10 // 배열 크기를 10으로 정의

int main(void){
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5}; // 크기가 10인 배열, 초기값으로 정렬되지 않은 숫자들이 저장되어 있음
    int i, j, temp, least; // 반복문과 정렬에 사용할 변수들

    // 선택 정렬 알고리즘
    for(i = 0; i < SIZE - 1; i++){ // i는 0부터 SIZE-2(8)까지 반복
        least = i; // 가장 작은 값의 인덱스를 저장할 변수, 초기값은 현재 인덱스 i
        for(j = i + 1; j < SIZE; j++) // j는 i+1부터 SIZE-1까지 반복
            if(list[j] < list[least]) // list[j]가 현재까지 찾은 최소값보다 작으면
                least = j; // 최소값의 인덱스를 j로 갱신
        // 현재 위치 i와 최소값 위치 least의 요소를 교환
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }

    // 정렬된 배열 출력
    for(i = 0; i < SIZE; i++) // i는 0부터 SIZE-1까지 반복
        printf("%d", list[i]); // 정렬된 배열의 각 요소를 출력
    printf("\n"); // 줄바꿈

    return 0; // 프로그램 종료
}
