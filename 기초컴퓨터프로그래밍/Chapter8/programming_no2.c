#include <stdio.h>

int is_multiple(int n, int m){
    if(n % m == 0)
        return 1;
    else
        return 0;
}

int main(void){
    int n, m;

    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &n);

    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &m);

    if(is_multiple(n, m) == 1)
        printf("%d은  %d의 배수 입니다.", n, m);
    else 
        printf("%d은 %d의 배수가 아닙니다.", n, m);

    return 0;
}