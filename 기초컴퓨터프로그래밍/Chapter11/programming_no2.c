#include <stdio.h>
#define SIZE 3

int main(void){
    int array[SIZE];
    int i;

    for(i = 0; i < SIZE; i++){
        printf("Enter the integer: ");
        scanf("%d", &array[i]);
    }

    printf("====================\n");
    printf("adress       value\n");
    printf("====================\n");

    for(i = 0; i < SIZE; i++)
        printf("%p  %d\n", &i, array[i]);

    return 0;
}