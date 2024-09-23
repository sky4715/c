#include <stdio.h>

int main(void){
    int n, sum = 0;

    scanf("%d", &n);
    while(n != 0){
        sum += n;
        scanf("%d", &n);
    }
    printf("%d", sum);
    return 0;
}