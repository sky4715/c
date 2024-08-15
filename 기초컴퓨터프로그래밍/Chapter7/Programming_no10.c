#include <stdio.h>

int main(void){
    int n, np = 0;

    if(np >= 2 && np <= 100){
        for(n = 2; n <= np; n++){
             while(np % n == 0){
                 if(n != (1 && np))
                    printf("");
                else
                    printf("%d ", np);
             }
        }             
    }
    return 0;
}