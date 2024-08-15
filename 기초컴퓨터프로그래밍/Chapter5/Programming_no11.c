#include <stdio.h>

int main(void){
    double distance, angle;

    printf("거리를 입력하시오: ");
    scanf("%lf", &distance);

    printf("각도를 입력하시오: ");
    scanf("%lf", &angle);

    printf("지구의 반지름은 %.2lf입니다.", distance / (angle * 3.14 / 180));
    return 0;
}