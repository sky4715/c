#include <stdio.h>

int main(void){
    int x, y, z;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y){
        if(y > z)
            printf("제일 작은 정수는 %d입니다.", z);
        else
            printf("제일 작은 정수는 %d입니다.", y);
    }
    else{
        if(x > z)
            printf("제일 작은 정수는 %d입니다.", z);
        else
            printf("제일 작은 정수는 %d입니다.", x);
    }
    return 0;
}