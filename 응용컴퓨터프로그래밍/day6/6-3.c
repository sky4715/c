#include <stdio.h>

int main(void){
    int i = 100;
    int *p = &i;
    int **q = &p;
    int ***z = &q;

    *p = 200;
    printf("i = %d\n", i);

    **q = 300;
    printf("i = %d\n", i);

    ***z = 400;
    printf("i = %d\n", i);

    return 0;
}