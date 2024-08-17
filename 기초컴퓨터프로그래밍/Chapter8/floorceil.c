#include <stdio.h>
#include <math.h>//반드시 포함

int main(void){
    double result, value = 1.6;

    result = floor(value);//result는 1.0
    printf("%.1lf\n", result);

    result = ceil(value);//result는 2.0
    printf("%.1lf\n", result);
    
    return 0;
}