#include <stdio.h>
#include <stdlib.h>
#include <time.h>//rand()의 원형 정의

#define MAX 45

int main(void){
    int i;

    srand((unsigned)time(NULL));
    
    for(i = 0; i < 6; i++)
        printf("%d", 1 + rand() % MAX);
    printf("\n");
    return 0;
}