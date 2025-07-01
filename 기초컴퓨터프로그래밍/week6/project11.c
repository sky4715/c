/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
switch -> if
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int x, num = 0; // x는 사용자 입력, num은 결과를 저장할 변수

    printf("Enter x num: "); // 사용자에게 x와 num을 입력하라는 메시지 출력
    scanf("%d %d", &x, &num); // x와 num을 사용자로부터 입력받음

    // 입력된 x에 따라 num을 조정하는 if-else 문
    if (x == -1) // x가 -1인 경우
        num--; // num을 1 감소
    else if (x == 1) // x가 1인 경우
        num++; // num을 1 증가
    else // 그 외의 경우
        num = 0; // num을 0으로 초기화

    printf("%d", num); // 최종 num 값을 출력
    return 0; // 프로그램 종료
}
