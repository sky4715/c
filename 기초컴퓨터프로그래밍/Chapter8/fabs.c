//fabs()함수는 실수를 받아서 절대값을 반환한다
#include <stdio.h>
#include <math.h>

int main(void){
    printf("12.0의 절대값은 %f\n", fabs(12.0));
    printf("-12.0의 절대값은 %f\n", fabs(-12.0));

    printf("24살과 32살의 나이 차이는 %f입니다. \n", fabs(24.0 - 32.0));
    return 0;
}