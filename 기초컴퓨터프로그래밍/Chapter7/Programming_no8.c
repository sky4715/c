#include <stdio.h>

int main(void){
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for(int y = 1; y <= n; y++){
        for(int x = 1; x <= y; x++)
            printf("%d", x);
        
        printf("\n");
    }
    return 0;
}