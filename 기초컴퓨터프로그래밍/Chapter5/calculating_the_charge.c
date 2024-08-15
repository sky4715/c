#include <stdio.h>

int main(void){
    int price, money;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);

    printf("\n거스름돈은 다음과 같습니다.\n");
    printf("천원권: %d장\n", (money - price) / 1000);
    printf("오백원 동전: %d개\n", ((money - price) % 1000) / 500);
    printf("백원 동전: %d개\n", (((money - price) % 1000) % 500) / 100);

    return 0;
}