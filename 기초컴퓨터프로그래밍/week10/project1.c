/**********************************
소프트웨어학부 2024042053 김여민
9주차 실습
동전 100번 던져 앞면과 뒷면 나온 횟수 각각 카운트
**********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(); // 함수 원형 선언

int main(void) {
    int toss;
    int heads = 0; // 앞면의 횟수를 저장할 변수
    int tails = 0; // 뒷면의 횟수를 저장할 변수

    srand((unsigned)time(NULL)); // 난수 생성을 위한 시드값 초기화 (현재 시간을 기준으로 설정)

    for(toss = 0; toss < 100; toss++) { // 100번 동전을 던짐
        if(coin_toss() == 1) // coin_toss 함수 호출 결과가 1이면 (앞면)
            heads++; // 앞면 횟수 증가
        else // 결과가 0이면 (뒷면)
            tails++; // 뒷면 횟수 증가
    }
    
    printf("the front of a coin: %d\n", heads); // 앞면의 총 횟수 출력
    printf("the back of a coin: %d\n", tails); // 뒷면의 총 횟수 출력
    return 0;
}

int coin_toss() {
    int head = rand() % 2; // 0 또는 1을 랜덤으로 생성 (0: 뒷면, 1: 앞면)
    return head; // 결과 반환
}
