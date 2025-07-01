/*연산자 우선순위를 고려한 다항식 계산 
(ax3 - bx2 + ax - b) * (a + b)를 해결하기 위한 프로그램을 제작하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int a, b, x;  // 정수형 변수 a, b, x를 선언
    float result = 0;  // 실수형 변수 result를 선언하고 0으로 초기화 (다항식 결과를 저장할 변수)

    printf("a와 b, x를 입력하세요: ");  // 사용자에게 입력을 요청하는 메시지 출력
    scanf("%d %d %d", &a, &b, &x);  // 사용자로부터 a, b, x 값을 입력받음

    // 다항식 계산: (a * x^3 - b * x^2 + a * x - b) * (a + b)
    result = (a * x * x * x - b * x * x + a * x - b) * (a + b);

    // 다항식의 결과를 소수점 이하 2자리까지 출력
    printf("다항식의 결과는 %.2lf입니다.", result);

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
