#include <stdio.h>

int main(void){
    double x, y;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    double sum = x + y;
    double dif = x - y;
    double mul = x * y;
    double sha = x / y;

    printf("%.2lf %.2lf %.2lf %.2lf", sum, dif, mul, sha);
    return 0;
}