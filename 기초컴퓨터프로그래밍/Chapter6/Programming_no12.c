#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int lottery_n, winning_n;

    printf("복권 번호를 입력하시오(0에서 99사이): ");
    scanf("%d", &lottery_n);

    srand(time(NULL));

    winning_n = rand() % 100;
    printf("당첨번호는 %d입니다.\n", winning_n);

    int lottery_f = lottery_n / 10;
    int lottery_s = lottery_n % 10;
    int winning_f = winning_n / 10;
    int winning_s = winning_n % 10;

    if(lottery_n == winning_f && lottery_s == winning_s)
        printf("상금 100만원");
    else if(lottery_n != winning_f && lottery_s != winning_s)
        printf("상금은 없습니다.");
    else
        printf("상금 50만원");

    return 0;
}