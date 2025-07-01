/*재귀함수
재귀함수를 사용하여 factorial 함수를 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

// factorial 함수 - 재귀적으로 주어진 정수 n의 팩토리얼을 계산하는 함수
int factorial(int n){
    if(n <= 1)  // n이 1 이하인 경우 (팩토리얼의 종료 조건)
        return 1;  // 1을 반환 (1! = 1, 0! = 1)
    else
        return n * factorial(n-1);  // n * (n-1)!을 계산하는 재귀 호출
}

int main(void){  // main 함수 - 프로그램의 시작 지점
    int n;  // 정수형 변수 n을 선언

    scanf("%d", &n);  // 사용자로부터 n을 입력받음
    printf("%d", factorial(n));  // factorial 함수를 호출하여 n의 팩토리얼을 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
