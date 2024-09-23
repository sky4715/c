/*재귀함수
재귀함수를 사용하여 factorial 함수를 작성하시오.*/
#include <stdio.h>

int factorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main(void){
    int n;

    scanf("%d", &n);
    printf("%d", factorial(n));
    
    return 0;
}