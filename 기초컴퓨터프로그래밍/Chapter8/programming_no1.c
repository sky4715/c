#include <stdio.h>

int even(int n){
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int absolute(int n){
    if(n > 0)
        return n;
    else
        return -n;
}

int sign(int n){
    if(n < 0)
        return -1;
    else if(n > 0)
        return 1;
    else
        return 0;
}

int main(void){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    int even_result;
    (even(num) == 1) ? (even_result = 1) : (even_result = 0);
    printf("even()의 곃과: %d\n", even_result);

    printf("absolute()의 결과: %d\n", absolute(num));

    int sign_result;
    (sign(num) == -1) ? (sign_result = -1) : (sign(num) == 1) ? (sign_result = 1) : (sign_result = 0);//a ? b : c ? d : e는 a ? b : (c ? d : e)와 같음
    printf("sign()의 결과: %d\n", sign_result);

    return 0;
}   