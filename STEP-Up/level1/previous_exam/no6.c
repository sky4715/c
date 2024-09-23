#include <stdio.h>

int main(void){
    int n, a = 0, b = -1;
    
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % 2 == 0){
            a += 2;
            printf("%d\n", a);
        }
        else{
            b += 2;
            printf("%d\n", b);
        }
    }
    return 0;
}