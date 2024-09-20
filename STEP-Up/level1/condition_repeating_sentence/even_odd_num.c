/*조건이 만족하는 동안, 조건이 만족할 때와 만족하지 않을 때 서로 다른 실행문의 실행을 반복
정수 n을 입력받아 1부터 n까지 중, 홀수와 짝수를 나타내고 총 개수를 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int n, a = 0, b = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("짝수 :%d\n", i);
            a++;
        }
        else{
            printf("홀수 :%d\n", i);
            b++;
        }
    }

    printf("짝수 :%d개\n홀수 :%d개", a, b);
    return 0;
}