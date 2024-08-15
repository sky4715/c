#include <stdio.h>

int main(void){
    int i = 0;
    int sum = 0;
    int n;

    while(i < 3){
        printf("숫자를 입력하시오: ");
        scanf("%d", &n);

        if(n > 0){
            i++;
            sum += n;
        }
    }
    printf("\n합계는 %d입니다.", sum);
    return 0;
}