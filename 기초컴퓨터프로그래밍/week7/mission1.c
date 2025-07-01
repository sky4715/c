/**********************************
소프트웨어학부 2024042053 김여민
7주차 실습
아래 프로그램은 달팽이가 우물을 탈출하는데 걸리는 날짜 수를 계산하는 프로그램
**********************************/

#include <stdio.h>
#define UP 7 //달팽이가 낮 동안 이동하는 거리

int main(void){
    int countDay = 0, height = 0; //날짜, 달팽이 위치의 변수 선언과 초기화

    do{
        height += UP; //달팽이가 낮 동안 위로 이동한 거리 계산
        height -= (height <= 100) ? 1 : 2; //달팽이가 밤 동안 미끄러지는 거리 계산
        countDay++; //날짜 증가
    }while(height <= 200); //제어
    printf("do while구문 :: %d일 %dm", countDay, height); //탈출 가능 날짜 수, 탈출 높이(거북이 위치) 출력하시오
    printf("\n");

    countDay = 0, height = 0; //날짜, 달팽이 위치의 변수 초기화
    
    while(height <= 200){
        height += UP; //달팽이가 낮 동안 위로 이동한 거리 계산
        height -= (height <= 100) ? 1 : 2; //달팽이가 밤 동안 미끄러지는 거리 계산
        countDay++; //날짜 증가
    }
    printf("while구문 :: %d일 %dm", countDay, height); //탈출 가능 날짜 수, 탈출 높이(거북이 위치) 출력하시오
    printf("\n");

    for (countDay = 0, height = 0; height <= 200; countDay++) {
        height += UP; //달팽이가 낮 동안 위로 이동한 거리 계산
        height -= (height <= 100) ? 1 : 2; //달팽이가 밤 동안 미끄러지는 거리 계산
    }
    printf("for 구문 :: %d일 %dm", countDay, height); //탈출 가능 날짜 수, 탈출 높이(거북이 위치) 출력하시오
    return 0;
}