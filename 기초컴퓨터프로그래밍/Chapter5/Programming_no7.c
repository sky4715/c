#include <stdio.h>

int main(void){
    int x, y;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &y);

    printf("x<<y의 값: %d", x << y);
    return 0;
}