#include <stdio.h>

int main(void){
    int i, n, sum;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    
    i = 0;
    sum = 0;

    while(i <= n){
        sum += i;
        i = i + 2;// i += 2도 가능
    } 
    printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
    return 0;
}