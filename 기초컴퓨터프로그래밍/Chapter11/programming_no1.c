#include <stdio.h>

void get_frac(double f, int *pi, double *pd){
    *pi = (int)f;
    *pd = f - *pi;
    printf("Integer part is %d.\n", *pi);
    printf("Prime number part is %.2lf.\n", *pd);
}

int main(void){
    int pi;
    double f, pd;

    printf("Enter the real number: ");
    scanf("%lf", &f);
    printf("get_frac(%.2lf) is called.\n", f);
    
    get_frac(f, &pi, &pd);
    return 0;
}