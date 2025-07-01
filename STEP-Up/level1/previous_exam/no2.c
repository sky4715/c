#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int a, b, x;  // 정수형 변수 a, b, x를 선언

    scanf("%d %d %d", &a, &b, &x);  // 사용자로부터 a, b, x 값을 입력받음
    // 주어진 다항식을 계산하여 출력: (a * x^3 - b * x^2 + a * x - b) * (a + b)
    printf("%d", (a * x * x * x - b * x * x + a * x - b) * (a + b));  

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
