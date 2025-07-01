#include<stdio.h>

int main(void){
    int money, choose;
    printf("초기 계좌 잔액을 입력하시오: ");
    scanf("%d", &money);

    while(1){
        printf("1. 잔액 조회\n");
        printf("2. 입금\n");
        printf("3. 출금\n");
        printf("4. 종료\n");
        printf("선택: ");
        scanf("%d", &choose);

        if(choose == 1){
            printf("현재 잔액은 %d입니다\n", money);
    }
        else if(choose == 2){
            int new_money1;
            printf("입금할 금액을 입력하세요 : ");
            scanf("%d", &new_money1);
            money += new_money1;
            printf("입금이 완료되었습니다. 현재 잔액은 %d원 입니다.\n", money);
        }
        else if(choose == 3){
            int new_money2;
            printf("출금할 금액을 입력하세요 : ");
            scanf("%d", &new_money2);
            money -= new_money2;
            printf("출금이 완료되었습니다. 현재 잔액은 %d원 입니다.\n", money);
        }
        else if(choose = 4){
            printf("프로그램을 종료합니다. 최종 잔액은 %d원 입니다.\n", money);
        }
        else
            printf("잘못된 숫자입니다.");
    }
}