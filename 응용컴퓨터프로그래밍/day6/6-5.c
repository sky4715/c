#include<stdio.h>

int main(void){
    int i, n;
    char *fruits[] = {"apple", "blueberry", "orange", "melon"};
    printf("%d %d\n", sizeof(fruits), sizeof(fruits[0]));
    n = sizeof(fruits)/sizeof(fruits[0]);

    for(i = 0; i < n; i++){
        printf("%s \n", fruits[i]);
    }
    
    return 0;
}