#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(){
    int number;
    while(1){
        printf("소수를 판정할 정수를 입력하세요(1 이하의 수이면 종료): ");
        scanf("%d", &number);
        if(number >= 2){
            if(is_prime(number))
                printf("%d에 대한 소수 판정.\n", number);
            else
                printf("%d에 대한 소수 아님으로 판정.\n", number);
        }
        else{
            printf("%d에 대한 소수 판정 불가\n", number);
            printf("프로그램을 종료합니다.");
            break;
        }
        printf("\n");
    }
    return 0;
}

int is_prime(int n){
    int divider, to;
    to = (int)sqrt((double)n);
    divider = 2;
    for(divider = 2; divider <= to; divider += 1){
        if((n % divider) == 0)
            return 0;
    }
    return 1;
}