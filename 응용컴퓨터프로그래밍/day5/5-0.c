#include <stdio.h>

int main(){
    int num = 10;
    char name = 'A';
    char name1[10] = "AAA";

    printf("%d", num);
    printf("%d\n", &num);
    printf("%d", name);
    printf("%d", name);
    printf("%d", name1);
    printf("%d", &name1);

    return 0;
}