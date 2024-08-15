#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int user, computer;

    printf("(1:가위 2:바위 3:보) 중에서 하나 선택하시오: ");
    scanf("%d", &user);

    srand(time(NULL));

    computer = rand() % 3 + 1;

    switch(computer){
        case 1:
            printf("컴퓨터는 가위를 선택하였습니다.\n");
            break;
        case 2:
            printf("컴퓨터는 바위를 선택하였습니다.\n");
            break;
        case 3:
            printf("컴퓨터는 보를 선택하였습니다.\n");
            break;
    }
    if(user == computer)
        printf("비겼습니다.");
    else if((user == 2 && computer == 1) || (user == 3 && computer == 2) || (user == 1 && computer == 3))
        printf("사용자가 이겼습니다.");
    else
        printf("컴퓨터가 이겼습니다.");

    return 0;
}