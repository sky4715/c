/*동전던지기 게임*/
//동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력. main() 함수는 tossing() 함수 호출. tossing() 동전 던져서 앞면이면 1을, 뒷면이면 0을 반환.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main(void){
    int toss;
    int heads = 0;
    int tails = 0;

    srand((unsigned)time(NULL));

    for(toss = 0; toss < 100; toss++){
        if(coin_toss() == 1)
            heads++;
        else
            tails++;
    }

    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    return 0;
}

int coin_toss(void){
    int head = rand() % 2;//rand()를 이용하여 난수를 발생. 난수의 범위를 % 연산자를 사용하여서 0 또는 1로 제한
    return head;
}