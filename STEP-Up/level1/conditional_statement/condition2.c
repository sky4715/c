/*여러 가지 조건에 따라 서로 다른 실행문 실행
시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 나타내는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int score;
    scanf("%d", &score);

    if (score <= 100 && score >=90)
        printf("A");
    else if (score <= 89 && score >=80)
        printf("B");
    else if (score <= 79 && score >=70)
        printf("C");
    else if (score <= 69 && score >=60)
        printf("D");
    else
        printf("F");

    return 0;
}