/*여러 가지 조건에 따라 서로 다른 실행문 실행
시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 나타내는 프로그램을 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int score;  // 정수형 변수 score를 선언
    scanf("%d", &score);  // 사용자로부터 점수를 입력받아 score에 저장

    if (score <= 100 && score >= 86)  // score가 86 이상 100 이하인 경우
        printf("A");  // 학점 "A"를 출력
    else if (score <= 85 && score >= 71)  // score가 71 이상 85 이하인 경우
        printf("B");  // 학점 "B"를 출력
    else if (score <= 70 && score >= 51)  // score가 51 이상 70 이하인 경우
        printf("C");  // 학점 "C"를 출력
    else if (score <= 50 && score >= 36)  // score가 36 이상 50 이하인 경우
        printf("D");  // 학점 "D"를 출력
    else if (score <= 35 && score >= 21)  // score가 21 이상 35 이하인 경우
        printf("E");  // 학점 "E"를 출력
    else  // score가 20 이하인 경우
        printf("F");  // 학점 "F"를 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
