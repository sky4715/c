#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int a, int b){
    int random_number = a + rand() % (b - a + 1);
    return random_number;
}

int main(void){
    srand((unsigned)time(NULL));

    for(int i = 0; i < 10; i++){
        int random_number = randint(10, 90);
        printf("%d ", random_number);
    }
    return 0;
}