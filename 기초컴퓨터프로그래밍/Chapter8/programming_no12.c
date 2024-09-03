#include <stdio.h>

int get_first_digit(int n){
    while(n / 10 != 0){
        n = n / 10;
    }
    return n;
}

int main(void){
    int i;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &i);

    printf("가장 상위 자리의 수는 %d입니다.", get_first_digit(i));
    return 0;
}