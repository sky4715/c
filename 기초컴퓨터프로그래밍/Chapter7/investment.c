#include <stdio.h>
#define SEED_MONEY 1000000
int main(void){
    int year = 0, money = SEED_MONEY;
   
    while(1){
        year++;
        
        money = money * (1 + 0.30);
        
        if(money > 10 * SEED_MONEY)//원금의 10배가 되면
            break;//원금의 10배가 되면 break문이 실행되면 반복루프 탈출
    }//무한루프
    
    printf("%d년\n", year);
    return 0;
}