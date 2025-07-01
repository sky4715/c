/**********************************
소프트웨어학부 2024042053 김여민
14주차 실습
strcmp 함수
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#include <string.h> // 문자열 비교 함수(strcmp) 사용을 위한 라이브러리 포함

int main(void) { // 프로그램의 진입점인 main 함수 정의
    char s1[80]; // 첫 번째 문자열을 저장할 char 배열 선언
    char s2[80]; // 두 번째 문자열을 저장할 char 배열 선언
    int result; // 문자열 비교 결과를 저장할 정수형 변수 선언

    printf("Enter the first word:"); // 첫 번째 단어 입력 요청 메시지 출력
    scanf("%s", s1); // 첫 번째 단어를 사용자로부터 입력받아 s1에 저장
    printf("Enter the second word:"); // 두 번째 단어 입력 요청 메시지 출력
    scanf("%s", s2); // 두 번째 단어를 사용자로부터 입력받아 s2에 저장
    
    result = strcmp(s1, s2); // s1과 s2를 사전 순으로 비교하여 결과를 result에 저장
    if(result < 0) // s1이 s2보다 사전 순으로 앞서는 경우
        printf("%s is ahead of %s\n", s1, s2); // s1이 s2보다 앞선다고 출력
    else if(result == 0) // s1과 s2가 동일한 경우
        printf("%s is equal to %s\n", s1, s2); // s1과 s2가 같다고 출력
    else // s1이 s2보다 사전 순으로 뒤처지는 경우
        printf("%s is behind %s\n", s1, s2); // s1이 s2보다 뒤처진다고 출력

    return 0; // 프로그램 정상 종료
}
