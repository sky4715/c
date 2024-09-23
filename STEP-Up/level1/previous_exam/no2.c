#include <stdio.h>

int main(void){
    int a, b, x;

    scanf("%d %d %d", &a, &b, &x);
    printf("%d", (a * x * x *x - b * x * x + a * x -b) * (a + b));

    return 0;
}