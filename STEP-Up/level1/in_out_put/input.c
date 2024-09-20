/*자료형에 따른 데이터 입력
정수, 실수, 문자를 입력받고 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int integer;
    float realnum;
    char sentence;

    scanf("%d %f %c", &integer, &realnum, &sentence);
    printf("%d\n%.2f\n%c", integer, realnum, sentence);
    return 0;
}