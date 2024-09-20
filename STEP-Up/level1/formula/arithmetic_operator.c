/*산술 연산자를 이용한 수식 표현
두 개의 정수를 입력받아 사칙연산과 나머지를 구하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d/%d=%d\n", a, b, a / b);
    printf("%d%%%d=%d\n", a, b, a % b);
    
    return 0;
}