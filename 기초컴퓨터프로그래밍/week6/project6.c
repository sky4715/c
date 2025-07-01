/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
성적 판별 else if
**********************************/
#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int score; // 사용자의 점수를 저장할 변수 score 선언
    printf("Enter your score: "); // 점수를 입력하라는 메시지 출력
    scanf("%d", &score); // 사용자가 입력한 점수를 변수 score에 저장

    // 점수에 따른 등급 판별
    if(score >= 90) // 90점 이상이면 A 등급
        printf("A");
    else if(score >= 80) // 80점 이상 90점 미만이면 B 등급
        printf("B");
    else // 80점 미만이면 C 등급
        printf("C");
    
    
    return 0; // 프로그램 종료
}
