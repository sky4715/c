#include <stdio.h>

int main(void){
    int second;

    printf("초를 입력하시오: ");
    scanf("%d", &second);

    printf("%d초는 %d분 %d초 입니다.", second, second / 60, second % 60);
    return 0;
}