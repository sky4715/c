/*while 문을 이용한 합계 프로그램*/
#include <stdio.h>

int main(void){
    int i, n, sum;

    i = 0;
    sum = 0;

    while(i < 5){
        printf("값을 입력하시오: ");
        scanf("%d", &n);
        sum = sum + n;//sum += n;과 같다.
        i++;
    }
    printf("합계는 %d입니다.\n", sum);
    
    return 0;
}