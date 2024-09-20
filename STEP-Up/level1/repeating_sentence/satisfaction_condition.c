/*조건이 만족하는 동안 반복 실행
while문을 사용하여 1부터 입력받은 정수까지 덧셈을 하는 조건문을 작성하시오.*/
#include <stdio.h>

int main(void){
    int a, sum = 0, i = 1;
    scanf("%d", &a);

    while(i <= a){
        sum += i;
        i++;
    }
    printf("%d",  sum);
    return 0;
}