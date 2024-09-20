/*조건이 만족하는 동안 반복 실행하다가 특정 상황이 발생하면 건너뛰기
while문을 사용하여 입력받는 두 개의 정수 사이 2의 배수가 몇 개 있는지 수를 나타내는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int x, y;
    int i = 0;
    int count = 0;

    scanf("%d %d", &x, &y);
    i = x;

    while(i <= y){
        if(i % 2 != 0)
            i++;
        else{
            count++;
            i++;
        }
    }
    printf("%d", count);
    return 0;
}