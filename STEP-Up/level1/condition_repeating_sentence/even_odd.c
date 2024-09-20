/*조건이 만족하면 반복 실행
정수를 입력받고 해당 정수가 짝수일 경우 정수만큼의 짝수를, 홀수일 경우 정수만큼의 홀수를 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % 2 != 0)
            printf("%d ", 2 * i - 1);
        else
            printf("%d ", 2 * i);
    }
    return 0;
}