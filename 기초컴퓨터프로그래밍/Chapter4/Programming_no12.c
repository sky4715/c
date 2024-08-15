#include <stdio.h>

int main(void){
    int i = 255;
    printf("%d\n", i);

    /*no(1)*/
    printf("%o, %x\n", i, i);

    /*no(2)*/
    i = -1;
    printf("%x\n", i);
    if(i % 2 == 0)
        printf("2의 보수이다.\n");
    else
        printf("2의 보수가 아니다.\n");

    i = -2;
    if(i % 2 == 0)
        printf("2의 보수이다.\n");
    else
        printf("2의 보수가 아니다.\n");

    i = -3;
    if(i % 2 == 0)
        printf("2의 보수이다.\n");
    else
        printf("2의 보수가 아니다.\n");

    return 0;
}