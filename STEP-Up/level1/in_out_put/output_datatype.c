/*출력_자료형에 따른 데이터 출력
문자를 입력받고 문자형, 정수형, 실수형으로 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>
int main(void){
    char a;
    double b = 0;
    
    scanf("%c", &a);
    b = a;

    printf("%d\n%c\n%.2lf", a, a, b);
    return 0;
}