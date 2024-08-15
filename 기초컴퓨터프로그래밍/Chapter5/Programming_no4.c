#include <stdio.h>

int main(void){
    int height;

    printf("키를 입력하시오(cm): ");
    scanf("%d", &height);

    double inch = height / 2.54;
    int feet = height / 12 / 2.54;

    printf("%dcm는 %d피트 %.2lf.", height, feet, inch);
    return 0; 
}