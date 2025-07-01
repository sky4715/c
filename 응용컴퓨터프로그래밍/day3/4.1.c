#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MNUM 10

void init_input(int sel[]);
void out_prt(int sel[]);

int main(){
    int ip[5] = {0};
    init_input(ip);
    out_prt(ip);

    return 0;
}

void init_input(int sel[]){
    int xdata;
    srand((unsigned)time(NULL));

    printf("1~4번 중 한 후보의 번호를 입력하시오.\n");

    printf("투표자 | 투표 결과\n");
    for(int n = 0; n < MNUM; n++){
        xdata = rand()%5;
        sel[xdata]++;
        printf("  %2d       %2d\n", n+1, xdata);
    }

    printf("\n");
}

void out_prt(int sel[]){
    for(int i = 0; i < 5; i++){
        if(i == 0)
            printf("무효표  %2d  %2d  \n", i, sel[i]);
        else
            printf("후보자  %2d  %2d  \n", i, sel[i]);
    }
}