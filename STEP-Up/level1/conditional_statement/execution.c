/*조건이 만족하면 실행문 실행
시험 점수를 입력했을 때 60점보다 높을 경우 “통과”를 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int score;
    scanf("%d", &score);

    if (score > 60)
        printf("통과");
    
    return 0;
}