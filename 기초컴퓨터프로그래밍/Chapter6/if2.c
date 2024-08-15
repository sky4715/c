/*if문 통하여 절대값 구하는 프로그램*/
#include <stdio.h>

int main(void){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;

    printf("절대값은 %d입니다.", num);
    return 0;
}