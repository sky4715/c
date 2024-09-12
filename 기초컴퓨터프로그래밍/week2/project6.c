/**********************************
소프트웨어학부 2024042053 김여민
2주차 실습
혈액형을 입력 받고 출력
**********************************/
#include <stdio.h> //전처리기 명령어

int main(void){ //메인 함수 선언
    char bloodType1, bloodType2; //혈액형을 저장할 문자형 변수 2개 선언

    printf("혈액형을 입력하세요 예)AB\n"); //사용자에게 혈액형을 입력하라는 메시지 출력
    scanf(" %c %c", &bloodType1, &bloodType2); //사용자로부터 두 개의 문자를 입력받아 각각 bloodType1과 bloodType2에 저장
    
    printf("나의 혈액형은: %c%c입니다.\n", bloodType1, bloodType2); //입력된 혈액형을 출력
    return 0; //반환값 0을 통해 프로그램이 정상적으로 종료되었음을 나타냄
}