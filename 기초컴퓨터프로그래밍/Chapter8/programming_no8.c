#include <stdio.h>

float get_tax(int income){
    if(income > 1000)
        return ((1000 * 0.08f) + ((income - 1000) * 0.10f));
    else
        return (income * 0.08f);
}

int main(void){
    int income;

    printf("소득을 입력하시오(만원): ");
    scanf("%d", &income);

    printf("소득세는 %d만원입니다.", (int)get_tax(income));
    return 0;
}