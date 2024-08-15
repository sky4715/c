#include <stdio.h>

int main(void){
    int n, i, a, b;
    int A = 0;
    int B = 0;

    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);

        if(a > b)
            A += 1;
        else if(a < b)
            B += 1;
        else
            A = A;
            B = B;
    }
    printf("%d %d", A, B);
    
    return 0;
}