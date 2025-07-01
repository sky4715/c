/**********************************
소프트웨어학부 2024042053 김여민
13주차 실습
함수 + 포인터, 두개의 정수를 입력 받아 사칙 연산하기
**********************************/

#include <stdio.h> // 표준 입출력을 사용하기 위한 헤더 파일

// 두 정수를 입력 받는 함수 :: 반환값 없음, 매개변수 있음 
void inputNum(int *, int *); // 두 정수의 주소를 매개변수로 받아 값을 수정
void add(int, int, double *); // 두 개의 정수를 call by value로 받고, 결과는 포인터로 반환
void sub(int, int, double *); // 두 정수를 빼고, 결과를 call by reference로 반환
void multi(int, int, double *); // 두 정수를 곱한 결과를 포인터로 반환
void div(int, int, double *); // 두 정수를 나눈 결과를 포인터로 반환

int main(void) { // main 함수 시작
    int x, y; // 계산될 두 정수를 저장할 변수
    double res; // 계산 결과를 저장할 변수

    inputNum(&x, &y); // 정수 입력 함수 호출, 변수의 주소를 전달해 입력받은 값을 저장
    add(x, y, &res); // 두 정수를 더하고 결과를 res에 저장
    printf("add: %.0lf\n", res); // 덧셈 결과 출력

    sub(x, y, &res); // 두 정수를 빼고 결과를 res에 저장
    printf("sub: %.0lf\n", res); // 뺄셈 결과 출력

    multi(x, y, &res); // 두 정수를 곱하고 결과를 res에 저장
    printf("multi: %.0lf\n", res); // 곱셈 결과 출력

    div(x, y, &res); // 두 정수를 나누고 결과를 res에 저장
    printf("div: %.0lf\n", res); // 나눗셈 결과 출력

    return 0; // 프로그램 정상 종료
}

// 정수를 입력받는 함수
void inputNum(int *xp, int *yp) { // 두 정수의 주소를 매개변수로 받아 값 입력
    printf("Enter the two numbers in order: "); // 사용자 입력 안내
    scanf("%d", xp); // 첫 번째 정수 입력
    scanf("%d", yp); // 두 번째 정수 입력
}

// 두 정수를 더한 결과를 저장하는 함수
void add(int x, int y, double *rp) { // 두 정수를 받고 결과를 포인터로 반환
    *rp = x + y; // 덧셈 결과를 포인터가 가리키는 위치에 저장
}

// 두 정수를 뺀 결과를 저장하는 함수
void sub(int x, int y, double *rp) { // 두 정수를 받고 결과를 포인터로 반환
    *rp = x - y; // 뺄셈 결과를 포인터가 가리키는 위치에 저장
}

// 두 정수를 곱한 결과를 저장하는 함수
void multi(int x, int y, double *rp) { // 두 정수를 받고 결과를 포인터로 반환
    *rp = x * y; // 곱셈 결과를 포인터가 가리키는 위치에 저장
}

// 두 정수를 나눈 결과를 저장하는 함수
void div(int x, int y, double *rp) { // 두 정수를 받고 결과를 포인터로 반환
    if (y != 0) // 나누는 값이 0이 아닐 때만 계산
        *rp = x / y; // 나눗셈 결과를 포인터가 가리키는 위치에 저장
    else 
        *rp = 0; // 나누는 값이 0일 경우 결과는 0으로 설정
}
