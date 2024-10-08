/**********************************
소프트웨어학부 2024042053 김여민
2주차 실습
오른쪽과 왼쪽 시력을 입력 받고 출력
**********************************/
#include <stdio.h> //전처리기 명령어

int main(void){ //메인 함수 선언
    double sightR, sightL; //오른쪽 시력과 왼쪽 시력을 저장할 변수 선언

    printf("오른쪽 시력을 입력하시오\n"); //사용자에게 오른쪽 시력을 입력하라는 메시지 출력
    scanf("%lf", &sightR); //사용자로부터 오른쪽 시력을 입력받아 sightR 변수에 저장

    printf("왼쪽 시력을 입력하시오\n"); //사용자에게 왼쪽 시력을 입력하라는 메시지 출력
    scanf("%lf", &sightL); //사용자로부터 왼쪽 시력을 입력받아 sightL 변수에 저장

    printf("오른쪽 시력: %5.2lf\t왼쪽 시력: %5.2lf", sightR, sightL); //입력된 오른쪽, 왼쪽 시력을 출력 및 5자리로 정렬하고 소수점 둘째 자리까지 반환
    return 0; //반환값 0을 통해 프로그램이 정상적으로 종료되었음을 나타냄
}