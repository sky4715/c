#include <stdio.h>

int main(void){
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("A[] = ");
    for(int i = 0; i < sizeof(A) / sizeof(A[0]); i++){
        printf("%d ", A[i]);
    }

    printf("\nA[] = ");
    for(int i = sizeof(A) / sizeof(A[0]) - 1; i >= 0; i--){
        printf("%d ", *(A+i));
    }
    return 0;
}