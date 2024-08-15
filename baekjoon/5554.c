#include <stdio.h>

int main(void){
    int a, b, c, d, total;

    scanf("%d", &a); //집 to 학교
    scanf("%d", &b); //학교 to PC방
    scanf("%d", &c); //PC방 to 학원
    scanf("%d", &d); //학원 to 집

    total = a + b + c + d;
    printf("%d\n", total / 60);
    printf("%d\n", total % 60);

    return 0;
}