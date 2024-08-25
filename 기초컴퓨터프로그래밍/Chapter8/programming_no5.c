#include <stdio.h>
#define PI 3.141592

double cal_area(double radius){
    return PI * radius * radius;
}

int main(void){
    double r;

    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &r);

    printf("원의 면적은 %.2f입니다.", cal_area(r));
    return 0;
}