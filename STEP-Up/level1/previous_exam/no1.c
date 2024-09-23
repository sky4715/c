#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    
    int mul = a + b;
    float aver = mul / 2.0;
    printf("%d %.1f", mul, aver);
    
    return 0;
}