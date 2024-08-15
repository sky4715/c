/*나눗셈을 하기 전에 분모가 0인지를 확인하는 if-else문을 이용하여 검사*/
#include <stdio.h>

int main(void){
    int n, d;
    
    printf("분자와 분모를 입력하시오: ");
    scanf("%d %d", &n, &d);

    if(d == 0)
        printf("0으로 나눌 수는 없습니다.\n");
    else
        printf("결과는 %d입니다.\n", n/d);

    return 0;
}
