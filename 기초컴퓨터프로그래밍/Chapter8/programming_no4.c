#include <stdio.h>

char check_alpha(char c){
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 'T';
    else
        return 'F';
}

int main(void){
    char alphabet;

    printf("문자를 입력하시오: ");
    scanf("%c", &alphabet);

    if(check_alpha(alphabet) == 'T')
        printf("%c는 알파벳 문자입니다.", alphabet);
    else
        printf("%c는 알파벳 문자가 아닙니다.", alphabet);
}

