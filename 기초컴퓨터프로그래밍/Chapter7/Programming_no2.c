#include <stdio.h>

int main(void){
    int n = 0;

    for(int i = 1; i <= 100; i++)
        if(i % 3 == 0)
            n += i;

    printf("1부터 100 사이의 모든 배수의 합은 %d입니다.", n);
    return 0;
}