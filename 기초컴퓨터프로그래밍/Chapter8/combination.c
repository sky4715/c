/*수학적 조합 값을 구하는 예제*/
#include <stdio.h>

int factorial(int n){
    int i, result = 1;
    
    for(i = 1; i <= n; i++)
        result *= i;
    return result;
}//팩토리얼 값을 반환

int combination(int n, int r){
    return (factorial(n)/(factorial(r) * factorial(n-r)));
}//팩토리얼 값을 이용하여서 조합값을 계산

int get_integer(void){
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}//사용자로부터 값을 입력받아 반환, get_integer() 함수를 정의

int main(void){
    int a, b;
    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %d \n", a, b, combination(a, b));
    return 0;
}