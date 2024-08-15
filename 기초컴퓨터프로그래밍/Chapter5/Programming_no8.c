#include <stdio.h>
#define PI 3.14

int main(void){
    double radius;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    printf("표면적은 %.2lf입니다.\n", 4 * PI * radius * radius);
    printf("체적은 %.2lf입니다.\n", (4/3) * PI * radius * radius * radius);

    return 0;    
}