#include <Stdio.h>

int main(void){
    double mass, speed;

    printf("질량(kg): ");
    scanf("%lf", &mass);

    printf("속도(m/s): ");
    scanf("%lf", &speed);

    printf("운동에너지(J): %lf", 0.5 * mass * speed * speed);

    return 0;
}