/**********************************
소프트웨어학부 2024042053 김여민
11주차 실습
극장 좌석 예약 프로그램
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#define SIZE 10 // 좌석 배열의 크기를 10으로 정의

int main(void){
    char ans1; // 좌석 예약 여부를 저장할 변수
    int ans2, i; // ans2는 좌석 번호를 저장할 변수, i는 반복문에서 사용할 변수
    int seats[SIZE] = {0}; // 좌석 예약 상태를 나타내는 배열, 0으로 초기화 (0: 예약되지 않음, 1: 예약됨)

    // 무한 반복문, 사용자가 'n'을 입력할 때까지 반복
    while(1){
        printf("Would you like to reserve a seat?(y or n) "); // 좌석 예약 여부 묻기
        scanf(" %c", &ans1); // 사용자 입력을 ans1에 저장
        if(ans1 == 'n') // 'n'을 입력하면 반복 종료
            break;

        // 좌석 배치도 출력
        printf("-------------------------------\n");
        printf(" 1 2 3 4 5 6 7 8 9 10\n"); // 좌석 번호 출력
        printf("-------------------------------\n");
        for(i = 0; i < SIZE; i++) // i는 0부터 SIZE-1(9)까지 반복
            printf(" %d", seats[i]); // 각 좌석의 예약 상태 출력 (0: 예약되지 않음, 1: 예약됨)
        printf("\n");

        // 예약할 좌석 번호 입력
        printf("Which seat would you like to reserve? "); // 예약할 좌석 번호 묻기
        scanf("%d", &ans2); // 입력받은 좌석 번호를 ans2에 저장

        if(seats[ans2 - 1] == 0){ // 예약되지 않은 좌석이면
            seats[ans2 - 1] = 1; // 해당 좌석을 예약 상태(1)로 변경
            printf("Your reservation is complete.\n"); // 예약 완료 메시지 출력
        }
        else // 이미 예약된 좌석이면
            printf("This seat is already reserved.\n"); // 예약 불가 메시지 출력
    }
    return 0; // 프로그램 종료
}
