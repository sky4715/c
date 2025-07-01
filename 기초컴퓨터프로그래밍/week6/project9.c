/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
달에 따른 계절 판별 switch
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int month; // 사용자가 입력한 달을 저장할 변수 선언
    printf("Enter the month: "); // 달을 입력하라는 메시지 출력
    scanf("%d", &month); // 사용자로부터 입력받은 달을 변수 month에 저장

    // 입력된 달에 따라 계절을 판별하는 switch문
    switch(month){
        case 12: case 1: case 2: // 12월, 1월, 2월은 겨울
            printf("Winter");
            break;
        case 3: case 4: case 5: // 3월, 4월, 5월은 봄
            printf("Spring");
            break;
        case 6: case 7: case 8: // 6월, 7월, 8월은 여름
            printf("Summer");
            break;
        case 9: case 10: case 11: // 9월, 10월, 11월은 가을
            printf("Autumn");
            break;
        default: // 1~12 이외의 값이 입력된 경우
            printf("Invalid month");
    }

    return 0; // 프로그램 종료
}
