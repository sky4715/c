/**********************************
소프트웨어학부 2024042053 김여민
9주차 실습
저장 유형 지정자 static
**********************************/

#include <stdio.h>   // 표준 입출력 라이브러리 포함

// 정적 지역 변수로서 static을 붙이면, 변수는 프로그램이 종료될 때까지 값을 유지
void sub() {
    static int scount; // 정적 지역 변수: 초기화가 0으로 한 번만 수행됨, 이후 호출 시 이전 값 유지
    int acount = 0;    // 자동 지역 변수: 매번 함수 호출 시마다 0으로 초기화

    printf("scount = %d\t", scount);  // scount 값 출력 (이전 호출에서 증가한 값을 유지)
    printf("acount = %d\n", acount);  // acount 값 출력 (항상 0으로 초기화됨)

    scount++;     // scount 값을 1 증가시킴 (다음 함수 호출 때 유지됨)
    acount--;     // acount 값을 1 감소시킴 (그러나 이후 호출 시 다시 0으로 초기화)
}

int main(void) {   // main 함수 시작
    sub();         // sub 함수 첫 번째 호출
    sub();         // sub 함수 두 번째 호출
    sub();         // sub 함수 세 번째 호출
    return 0;      // 프로그램 정상 종료
}
