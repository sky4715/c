#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int score;  // 정수형 변수 score를 선언

    scanf("%d", &score);  // 사용자로부터 점수를 입력받음
    
    // 점수에 따라 학점을 출력
    if(score <= 100 && score >= 90)  // 점수가 90 이상 100 이하일 경우
        printf("A");
    else if(score <= 89 && score >= 80)  // 점수가 80 이상 89 이하일 경우
        printf("B");
    else if(score <= 79 && score >= 70)  // 점수가 70 이상 79 이하일 경우
        printf("C");
    else if(score <= 69 && score >= 60)  // 점수가 60 이상 69 이하일 경우
        printf("D");
    else if(score <= 59 && score >= 50)  // 점수가 50 이상 59 이하일 경우
        printf("E");
    else  // 점수가 50 미만일 경우
        printf("F");
    
    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
