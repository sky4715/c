#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int A[], int size){
    int i;

    for(i = 0; i < size; i++){
        A[i] = rand();
    }
}

int main(void){
    int size;

    srand(time(NULL));

    printf("정수 배열을 입력하시오: ");
    scanf("%d", &size);

    int array[size];

    array_fill(array, size);

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}