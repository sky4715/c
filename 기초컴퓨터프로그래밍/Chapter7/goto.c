#include <stdio.h>

int main(void){
    int x, y;

    for(y = 1; y < 10000; y++){//중첩 루프
        for(x = 1; x < 10; x++){
            if(_kbhit())//_kbhit : 키보드가 눌러지면 1을 반환
                goto OUT;//키가 눌러지면 OUT으로 점프

            printf("*");
        }
        printf("\n");
    }
OUT:
    return 0;
}