/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
no.2
**********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {  

  ///////////////////////////////////////////////////////////////
  //====================가위 바위 보 게임========================//
  ///////////////////////////////////////////////////////////////

  //rand()함수를 통해 무작위 수 추출과 사용자 입력
    int comChoice; //컴퓨터가 선택한 값 저장 변수
    int playerChoice; //사용자가 선택한 값 저장 변수
    srand(time(NULL));  //seed값을 time으로 함으로써 실행할때마다 다른 수 추출
    comChoice = rand() % 3 + 1;   //컴퓨터가 선택한 무작위 수는 1,2,3 중 하나
    printf("[가위:1, 바위:2, 보:3] 중 정수 하나 선택 : ");
    scanf("%d", &playerChoice);
    printf("comChoice : %d\n", comChoice);
    /////////////////////////////////////////////////////////
    //3.switch case문을 이용하여 해결
    switch(playerChoice){
        case 1:  //사용자 1(가위) 선택
            switch(comChoice){
                case 1:  //컴 1(가위) 선택
                    printf("tie!");  //무승부
                    break;
                case 2:  //컴 2(바위) 선택
                    printf("com win!");
                    break;
                case 3:
                    printf("player win!");
            }
            break;  ////사용자 1(가위) 선택에 대한 break문
        case 2:  //사용자 2(바위) 선택
            switch(comChoice){//switch case을 이용하여 사용자가 2일때 컴이 1,2,3을 선택했을 경우를 각각 비교하는 코드
                case 1:
                    printf("player win!");
                    break;
                case 2:
                    printf("tie!");
                    break;
                case 3:
                    printf("com win!");
                    break;
            }
            break;
        case 3:
            switch(comChoice){
                case 1:
                    printf("com win!");
                    break;
                case 2:
                    printf("player win!");
                case 3:
                    printf("tie!");
            }
            break;
        default :  //사용자가 1 2 3외의 값을 입력했을 때(에러처리)
            printf("1 2 3 중 하나를 선택하세요.");
    }
}