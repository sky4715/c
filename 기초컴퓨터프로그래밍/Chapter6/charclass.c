/*문자를 분류하는 프로그램*/
#include <stdio.h>

int main(void){
    char ch;

    printf("문자를 입력하시오: ");
    ch = getchar();//문자를 받아들이는 함수

    if(ch >= 'A' && ch <='Z')
        printf("%c는 대문자입니다.\n", ch);
    else if(ch >= 'a' && ch <='z')
        printf("%c는 소문자입니다.\n", ch);
    else
        printf("%c는 기타문자입니다.\n", ch);

    return 0;
}