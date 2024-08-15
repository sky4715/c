/*0부터 10까지의 정수 중에서 3의 배수만 제외하고 출력*/
#include <stdio.h>

int main(void){
    int i;

    for(i = 0; i < 10; i++){
        if(i % 3 == 0)
            continue;//continue 문을 만나면 다음 반복을 즉시 시작
        printf("%d ", i);
    }
    return 0;
}