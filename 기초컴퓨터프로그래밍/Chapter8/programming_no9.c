#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sin_degree(double degree){
    double radian = (PI * degree) / 180.0;
    return sin(radian);
}

int main(void){
    for(double degree = 0; degree <= 180; degree += 10){
        printf("sin(%f)의 값은 %f\n", degree, sin_degree(degree));
    }
    return 0;
}