/*변수 사용을 통한 수식 표현
입력받은 정수의 길이를 반지름으로 갖는 원의 넓이를 구하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    const double pi = 3.14;

    int r;
    double area = 0;

    scanf("%d", &r);
    area = pi * r * r;
    printf("%.2lf", area);
    
    return 0;
}