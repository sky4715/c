#include <stdio.h>

int main(void){
    double x;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    if(x <= 0)
        printf("f(x)의 값은 %.2lf입니다.", x * x - 9 * x * + 2);
    else
         printf("f(x)의 값은 %.2lf입니다.", 7 * x + 2);
    
    return 0;
}    