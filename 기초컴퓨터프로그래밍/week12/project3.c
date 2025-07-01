/**********************************
소프트웨어학부 2024042053 김여민
12주차 실습
포인터 증감 연산
**********************************/

#include <stdio.h>  // 표준 입출력 라이브러리를 포함

int main(void) {
    char *pc;     // char형 포인터 선언
    int *pi;      // int형 포인터 선언
    double *pd;   // double형 포인터 선언

    // 포인터 변수들을 각각 주소 10000으로 초기화
    pc = (char *)10000;   // pc는 char형 포인터로, 1바이트 크기를 가정
    pi = (int *)10000;    // pi는 int형 포인터로, 4바이트 크기를 가정
    pd = (double *)10000; // pd는 double형 포인터로, 8바이트 크기를 가정

    // pc: char형 포인터이므로 1바이트 단위로 주소가 증가
    // (pc + 1)은 10000 + 1 * sizeof(char) = 10001
    // (pc + 2)은 10000 + 2 * sizeof(char) = 10002
    printf(" pc=%u, pc+1=%u, pc+2= %u\n", pc, pc + 1, pc + 2);

    // pi: int형 포인터이므로 4바이트 단위로 주소가 증가
    // (pi + 1)은 10000 + 1 * sizeof(int) = 10004
    // (pi + 2)은 10000 + 2 * sizeof(int) = 10008
    printf(" pi=%u, pi+1=%u, pi+2= %u\n", pi, pi + 1, pi + 2);

    // pd: double형 포인터이므로 8바이트 단위로 주소가 증가
    // (pd + 1)은 10000 + 1 * sizeof(double) = 10008
    // (pd + 2)은 10000 + 2 * sizeof(double) = 10016
    printf(" pd=%u, pd+1=%u, pd+2= %u\n", pd, pd + 1, pd + 2);

    return 0; // 프로그램 종료
}
