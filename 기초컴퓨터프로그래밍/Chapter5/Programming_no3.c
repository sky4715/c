#include <stdio.h>

int main(void){
    int a, b, c;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b ? ((a > c) ? a : c) : ((b > c) ? b : c));
    printf("최댓값은 %d입니다.", max);

    return 0;
}