/*여러 가지 조건에 따라 서로 다른 실행문 실행
시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 나타내는 프로그램을 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int score;  // 정수형 변수 score를 선언
    scanf("%d", &score);  // 사용자로부터 점수를 입력받아 score에 저장

    if (score <= 100 && score >= 90)  // score가 90 이상 100 이하인 경우
        printf("A");  // 학점 "A"를 출력
    else if (score <= 89 && score >= 80)  // score가 80 이상 89 이하인 경우
        printf("B");  // 학점 "B"를 출력
    else if (score <= 79 && score >= 70)  // score가 70 이상 79 이하인 경우
        printf("C");  // 학점 "C"를 출력
    else if (score <= 69 && score >= 60)  // score가 60 이상 69 이하인 경우
        printf("D");  // 학점 "D"를 출력
    else  // score가 60 미만인 경우
        printf("F");  // 학점 "F"를 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
