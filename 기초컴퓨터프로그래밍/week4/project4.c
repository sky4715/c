#include <stdio.h> // 표준 입출력 라이브러리를 포함한다.

int main(void) { // 메인 함수 시작
    int x, y, result; // 정수 x, y와 결과를 저장할 result 변수를 선언한다.
    double f_res; // 실수형 결과를 저장할 f_res 변수를 선언한다.
    
    printf("두개의 정수를 입력하시오: "); // 사용자에게 두 개의 정수를 입력하라는 메시지를 출력한다.
    scanf("%d %d", &x, &y); // 사용자로부터 두 개의 정수를 입력받아 각각 x와 y에 저장한다.

    result = x + y; // x와 y의 합을 계산하여 result에 저장한다.
    printf("%d + %d = %d\n", x, y, result); // x와 y의 합을 출력한다.

    result = x - y; // x에서 y를 뺀 값을 계산하여 result에 저장한다.
    printf("%d - %d = %d\n", x, y, result); // x에서 y를 뺀 값을 출력한다.

    result = x * y; // x와 y의 곱을 계산하여 result에 저장한다.
    printf("%d * %d = %d\n", x, y, result); // x와 y의 곱을 출력한다.

    result = x / y; // x를 y로 나눈 값을 정수로 계산하여 result에 저장한다.
    f_res = x / (double)y; // x를 y로 나눈 값을 실수로 계산하여 f_res에 저장한다.
    
    printf("%d / %d = %d\n", x, y, result); // x를 y로 나눈 결과 (정수)를 출력한다.
    printf("%d / %d = %lf\n", x, y, f_res); // x를 y로 나눈 결과 (실수)를 출력한다.

    result = x % y; // x를 y로 나눈 나머지를 계산하여 result에 저장한다.
    printf("%d %% %d = %d\n", x, y, result); // x를 y로 나눈 나머지를 출력한다. (%%는 % 기호를 출력하기 위해 사용)

    return 0; // 프로그램이 정상적으로 종료됨을 나타낸다.
}
