#include <stdio.h>

int main(void){
    int x, y;

    printf("x좌표를 입력하시오: ");
    scanf("%d", &x);

    printf("y좌표를 입력하시오: ");
    scanf("%d", &y);

    (x>0 && y>0) ? printf("1사분면입니다.") : printf("");
    (x<0 && y>0) ? printf("2사분면입니다.") : printf("");
    (x<0 && y<0) ? printf("3사분면입니다.") : printf("");
    (x>0 && y<0) ? printf("4사분면입니다.") : printf("");

    return 0;
}