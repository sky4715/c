/**********************************
소프트웨어학부 2024042053 김여민
14주차 실습
문자열 복사
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void) { // 프로그램의 진입점인 main 함수 정의
    char src[] = "Action speaks louder than words"; // 원본 문자열을 저장하는 배열 초기화
    char dst[100]; // 복사된 문자열을 저장할 배열 선언 (크기를 넉넉히 설정)
    
    int i; // 반복문을 위한 변수 선언
    printf("original string=%s\n", src); // 원본 문자열 출력
    for(i = 0; src[i] != '\0'; i++) // 문자열 끝('\0')까지 반복
        dst[i] = src[i]; // 각 문자를 src에서 dst로 복사
    dst[i] = '\0'; // 복사 배열의 끝에 문자열 종료 문자('\0') 추가
    printf("copied string=%s\n", dst); // 복사된 문자열 출력

    return 0; // 프로그램 정상 종료
}
