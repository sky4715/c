#include <stdio.h>

int main(void){
    int x, y;

    printf("x, y 좌표를 입력하시오: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("1사분면입니다.");
    else if(x < 0 && y > 0)
        printf("2사분면입니다.");
    else if(x < 0 && y < 0)
        printf("3사분면입니다.");
    else
        printf("4사분면입니다.");

    return 0;
}