#include <stdio.h>

double get_bigger(double a, double b){
    return (a > b) ? a : b;
}

int main(void){
    double x, y;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);
    
    printf("큰 수는 %.1f입니다.", get_bigger(x, y));
    return 0;
}