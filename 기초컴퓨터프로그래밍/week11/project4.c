/**********************************
소프트웨어학부 2024042053 김여민
11주차 실습
최솟값 찾기1
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#include <stdlib.h> // 표준 라이브러리 포함 (rand 함수 사용을 위해)
#include <time.h> // 시간 관련 라이브러리 포함 (srand 함수에 시간 값을 전달하기 위해)
#define SIZE 10 // 배열 크기를 10으로 정의

int main(void){
    int prices[SIZE] = {0}; // 크기가 10인 정수 배열, 초기값은 0
    int i, minimum; // i는 반복문에서 사용할 변수, minimum은 최소값을 저장할 변수

    // 배열 출력 형식을 위한 안내선 출력
    printf("---------------------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n"); // 배열 요소 번호 출력
    printf("---------------------------------------\n");

    // 난수 초기화: 현재 시간을 시드로 하여 난수 생성
    srand((unsigned)time(NULL));

    // prices 배열에 난수로 생성된 값을 저장하고 출력
    for(i = 0; i < SIZE; i++){ // i는 0부터 SIZE-1(9)까지 반복
        prices[i] = (rand() % 100) + 1; // 1부터 100까지의 난수 생성하여 prices[i]에 저장
        printf("%-3d", prices[i]); // 배열 값 출력 (3자리 맞춤)
    }
    printf("\n\n"); // 줄바꿈

    // 배열에서 최소값 찾기
    minimum = prices[0]; // 최소값을 초기화하여 배열의 첫 번째 요소로 설정
    for(i = 1; i < SIZE; i++){ // i는 1부터 SIZE-1(9)까지 반복
        if(prices[i] < minimum) // 현재 최소값보다 작은 값이 나오면
            minimum = prices[i]; // 최소값을 해당 값으로 갱신
    }

    // 최종 최소값 출력
    printf("The minimum value is %d.\n", minimum);

    return 0; // 프로그램 종료
}
