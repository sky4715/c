#include <stdio.h>

int main(void){
    int a[] = {10, 20, 30, 40};
    int *c = a;
    int *d = a;
    int *p = a;

    *(c + 0) = 90;

    printf("a + 0 = %u\n", c[0]);
    printf("a + 0 = %u\n", d[0]);
    printf("a + 0 = %u\n", p[0]);
    printf("+++++++++++++++++\n");
    printf("a + 0 = %u\n", *(c + 0));
    printf("a + 0 = %u\n", *(d + 0));
    printf("a + 0 = %u\n", *(p + 0));

    return 0;
}