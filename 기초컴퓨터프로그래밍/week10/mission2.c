/**********************************
소프트웨어학부 2024042053 김여민
10주차 과제
순환기법을 이용하여 지수값을 계산하는 사용자 정의 함수
**********************************/
#include <stdio.h> // 표준 입출력 라이브러리 포함

// 함수 원형 선언
double power(int base, int power_raised); // 밑수와 지수를 받아 지수 값을 계산하는 함수

int main() {
    int base; // 밑수를 저장할 변수
    int power_raised; // 지수를 저장할 변수
    double res; // 결과 값을 저장할 변수

    printf("밑수: ");
    scanf("%d", &base); // 밑수 입력받기
    printf("지수: ");
    scanf("%d", &power_raised); // 지수 입력받기

    res = power(base, power_raised); // 지수 계산 함수 호출하여 결과 저장

    printf("%d^%d = %.0lf", base, power_raised, res); // 결과 출력
    return 0; // 프로그램 정상 종료
}

// 지수 계산 함수 정의 (재귀 방식)
double power(int base, int power_raised) {
    if (power_raised == 0) // 지수가 0인 경우
        return 1; // 아무 수나 0제곱은 1이므로 1을 반환
    else // 지수가 0이 아닌 경우
        return base * power(base, power_raised - 1); // base와 power 함수를 재귀적으로 호출하여 곱함
}
