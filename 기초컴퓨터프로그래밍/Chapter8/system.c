#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    system("dir");//dir 명령어 실행
    printf("아무 키나 치세요\n");
    _getch();//헤더파일 conio에 포함되는 함수
    system("cls");//하나의 문자를 받는 함수

    return 0;
}