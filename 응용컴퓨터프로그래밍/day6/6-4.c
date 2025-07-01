#include <stdio.h>

int main(void){
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *pa[5] = {&a, &b, &c, &d, &e};

    for(int n = 0; n < 5; n++){
        printf("%d ", *pa[n]);
    }
    return 0;
}