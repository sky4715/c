/*변수 초기화
입력받은 정수의 길이를 반지름으로 갖는 원의 둘레를 구하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    const double pi = 3.14;
    
    int r;
    double cir = 0;
    
    scanf("%d", &r);

    cir = 2 * pi * r;
    printf("%lf", cir);
    return 0;
}