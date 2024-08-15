#include <stdio.h>

int main(void){
    int weight, height;

    printf("체중과 키를 입력하시오: ");
    scanf("%d %d", &weight, &height);

    int standard_weight = (height - 100) * 0.9;
    if(weight > standard_weight)
        printf("과체중입니다.");
    else if(weight == standard_weight)
        printf("정상체중입니다.");
    else
        printf("저체중입니다.");

    return 0;
}