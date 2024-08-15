#include <stdio.h>

int main(void){
    for(int y = 0; y < 7; y++){
        for(int x = 7; x > y; x--)
            printf(" ");
            
        for(int z = 0; z < y; z++)
            printf("*");

        printf("\n");
    }
    return 0;
}