#include <stdio.h>

int main(void){
    char code;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &code);

    printf("문자:%c입니다.", code);

    return 0;
}