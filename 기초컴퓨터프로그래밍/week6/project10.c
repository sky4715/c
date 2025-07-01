/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
달에 따른 계절 판별 if
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int month; // 사용자가 입력한 달을 저장할 변수 선언

    printf("Enter the month: "); // 달을 입력하라는 메시지 출력
    scanf("%d", &month); // 사용자로부터 입력받은 달을 변수 month에 저장

    // 입력된 달에 따라 계절을 판별하는 if-else if문
    if(month == 12 || month == 1 || month == 2) // 12, 1, 2월은 겨울
        printf("Winter");
    else if(month == 3 || month == 4 || month == 5) // 3, 4, 5월은 봄
        printf("Spring");
    else if(month == 6 || month == 7 || month == 8) // 6, 7, 8월은 여름
        printf("Summer");
    else // 그 외 (9, 10, 11월)은 가을
        printf("Autumn");

    return 0; // 프로그램 종료
}
