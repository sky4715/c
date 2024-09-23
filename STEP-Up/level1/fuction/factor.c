/*함수의 인자 사용
두 개의 정수를 매개변수로 전달 받아 덧셈 결과를 반환하는 함수를 작성하시오.*/
#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", add(a, b));
    
    return 0;
}