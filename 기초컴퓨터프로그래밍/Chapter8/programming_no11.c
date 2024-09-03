#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_dice(void){
    return 1 + rand() % 6;
}

int main(void){
    srand((unsigned)time(NULL));

    int user_dice1 = random_dice();
    int user_dice2 = random_dice();
    int user_dice3 = random_dice();
    int user_sum = user_dice1 + user_dice2 + user_dice3;

    printf("사용자 주사위=(%d, %d, %d)=%d\n", user_dice1, user_dice2, user_dice3, user_sum);

    int computer_dice1 = random_dice();
    int computer_dice2 = random_dice();
    int computer_dice3 = random_dice();
    int computer_sum = computer_dice1 + computer_dice2 + computer_dice3;

    printf("컴퓨터 주사위=(%d, %d, %d)=%d\n", computer_dice1, computer_dice2, computer_dice3, computer_sum);

    if (user_sum > computer_sum)
        printf("사용자 승리");
    else if(user_sum < computer_sum)
        printf("컴퓨터 승리");
    else
        printf("무승부");

    return 0;
}