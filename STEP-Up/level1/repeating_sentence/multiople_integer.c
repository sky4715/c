/*조건이 만족하는 동안(또는 일정 횟수) 반복 실행
for문을 사용하여 1부터 입력받은 정수까지 곱하는 조건문을 작성하시오.*/
#include <stdio.h>

int main(void){
    int n, mul = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        mul *= i;
    
    printf("%d", mul);
    return 0;
}