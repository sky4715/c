/*자동차 경주 프로그램*/
//자동차가 1초에 달리는 거리가 난수에 의하여 결정. 주행한 거리를 *로 화면에 표시
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void disp_car(int car_number, int distance){
    int i;

    printf("CAR #%d:", car_number);
    for(i = 0; i < distance/10; i++)
        printf("*");
    printf("\n");
}

int main(void){
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned)time(NULL));

    for(i = 0; i < 20; i++){
        system("cls");//화면을 지운다
        car1_dist += rand() % 100;//rand() 사용하여 난수 발생. 범위는 %연산자 사용하여 0에서 99로 제한
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        Sleep(1000);//1000밀리초 동안 잠재움.
    }
    return 0;
}