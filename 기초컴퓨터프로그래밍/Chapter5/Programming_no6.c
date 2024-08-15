#include <stdio.h>
#include <math.h>

int main(void){
    double x = 1.0 - 0.9;
    double y = 0.1;

    printf("(1.0-0.9)==0.1은 %d입니다.", fabs(x-y) < 0.0001);
    return 0;
}