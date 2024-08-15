#include <stdio.h>

int main(void){
    double r, result = 1.0;
    int n;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);

    printf("거듭제곱 횟수를 입력하시오: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        result *= r;

    printf("결과값은 %lf", result);
    return 0;
}