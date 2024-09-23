#include <stdio.h>

int main(void){
    int n, m;

    scanf("%d\n%d", &n, &m);
    
    for(int y = 1; y <= n; y++){
        for(int x = 0; x < m; x++)
            printf("*");
        printf("\n");
    }    
    return 0;
}