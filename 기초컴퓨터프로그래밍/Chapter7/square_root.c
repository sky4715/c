/*break를 이용하여 무한루프를 탈출한다.*/
#include <stdio.h>
#include <math.h>

int main(void){
    double v;

    while(1){
        printf("실수값을 입력하시오: ");
        scanf("%lf", &v);

        if(v < 0.0)//만약 변수 v가 0.0보다 작으면 제곱근을 구할 수 없으므로 break문을 실행하여 루프를 탈출
            break;

            printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));//sqrt()는 double형 실수를 받아서 제곱근을 계산하는 라이브러리 함수
    }//1은 항상 참이므로 while(1)은 무한 루프
    return 0;
}