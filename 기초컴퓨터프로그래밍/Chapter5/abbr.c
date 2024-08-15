/*복합 대입 연산자 프로그램*/
#include <stdio.h>

int main(void){
    int x = 10, y = 10, z = 33;

    printf("x = %d\ty = %d\tz = %d\t", x += 1, y *= 2, z %= 30);
    return 0;
}