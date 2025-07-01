/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
if -> switch
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int k, y; // 사용자 입력을 저장할 변수 k와 y 선언
    char code; // 코드 문자를 저장할 변수 code 선언

    printf("Enter k y code: "); // k, y, code를 입력하라는 메시지 출력
    scanf("%d %d %c", &k, &y, &code); // 사용자로부터 k, y, code를 입력받음

    // 입력된 code에 따라 k와 y의 값을 조정하는 switch 문
    switch(code){
        case 'X': // code가 'X'인 경우
            k++; // k를 1 증가
            break;
        case 'Y': // code가 'Y'인 경우
            y++; // y를 1 증가
            break;
        default: // 그 외의 경우
            k = y = 0; // k와 y를 0으로 초기화
            break;
    }

    // 최종 k와 y 값을 출력
    printf("k = %d, y = %d\n", k, y); // k와 y의 값을 출력
    return 0; // 프로그램 종료
}
