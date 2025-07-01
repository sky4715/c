/**********************************
소프트웨어학부 2024042053 김여민
8주차 실습
사용자와 컴퓨터가 랜덤함수 이용하여 주사위 게임하는 프로그램
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 주사위를 굴려 1부터 6까지의 랜덤한 값을 반환하는 함수 선언
int roll_dice();

// 승자를 결정하고 결과를 출력하는 함수 선언
void victory(int user_sum, int computer_sum);

int main(void) {
    int user, com;  // 사용자와 컴퓨터의 주사위 결과
    int user_total = 0, computer_total = 0;  // 사용자와 컴퓨터의 총합 초기화

    srand(time(NULL));  // 난수 생성을 위한 시드 설정

    // 사용자 주사위 결과 출력
    printf("사용자 주사위=(");
    for(int i = 0; i < 3; i++) {  // 주사위 3번 굴리기
        user = roll_dice();  // 주사위 굴리기
        printf(" %d", user);  // 굴린 주사위 값 출력
        user_total += user;  // 총합에 추가
    }
    printf(")=%d\n", user_total);  // 사용자 총합 출력

    // 컴퓨터 주사위 결과 출력
    printf("컴퓨터 주사위=(");
    for(int i = 0; i < 3; i++) {  // 주사위 3번 굴리기
        com = roll_dice();  // 주사위 굴리기
        printf(" %d", com);  // 굴린 주사위 값 출력
        computer_total += com;  // 총합에 추가
    }
    printf(")=%d\n", computer_total);  // 컴퓨터 총합 출력

    // 승자 결정 및 출력
    victory(user_total, computer_total);
    return 0;  // 프로그램 종료
}

// 주사위를 굴리는 함수 정의
int roll_dice() {
    return 1 + rand() % 6;  // 1부터 6까지의 랜덤한 정수 반환
}

// 승자를 결정하고 결과를 출력하는 함수 정의
void victory(int user_sum, int computer_sum) {
    if (user_sum > computer_sum)  // 사용자 점수가 더 크면
        printf("사용자 승리!");  // 사용자 승리 메시지 출력
    else if(user_sum < computer_sum)  // 컴퓨터 점수가 더 크면
        printf("컴퓨터 승리!");  // 컴퓨터 승리 메시지 출력
    else  // 점수가 같으면
        printf("무승부");  // 무승부 메시지 출력
}


