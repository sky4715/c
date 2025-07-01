/**********************************
소프트웨어학부 2024042053 김여민
14주차 실습
strcpy 와 strcat
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#include <string.h> // 문자열 관련 함수(strcpy, strcat 등) 사용을 위한 라이브러리 포함

int main(void) { // 프로그램의 진입점인 main 함수 정의
    char string[80]; // 문자열을 저장할 char 배열 선언 (최대 80바이트)

    strcpy(string, "Hello world from "); // string에 "Hello world from " 문자열 복사
    strcat(string, "strcpy "); // string에 "strcpy " 문자열 추가 (뒤에 이어붙임)
    strcat(string, "and "); // string에 "and " 문자열 추가 (뒤에 이어붙임)
    strcat(string, "strcat!"); // string에 "strcat!" 문자열 추가 (뒤에 이어붙임)

    printf("string = %s\n", string); // 최종 문자열 출력
    return 0; // 프로그램 정상 종료
}
