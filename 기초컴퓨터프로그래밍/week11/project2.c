/**********************************
소프트웨어학부 2024042053 김여민
11주차 실습
성적 평균 구하기
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함
#define STUDENTS 10 // 학생 수를 상수로 정의

int main(void){
    int scores[STUDENTS]; // 학생 점수를 저장할 배열 (10명의 학생 점수)
    int sum = 0; // 점수의 총합을 저장할 변수, 초기값은 0
    int i; // 반복문에서 사용할 변수
    double average; // 평균 점수를 저장할 변수

    // 학생의 점수를 입력받는 반복문
    for(i = 0; i < STUDENTS; i++){ // i는 0부터 STUDENTS-1(9)까지 반복
        printf("Enter the score of students: "); // 점수 입력 안내 메시지 출력
        scanf("%d", &scores[i]); // 입력받은 점수를 scores 배열에 저장
    }

    // 점수의 총합을 계산하는 반복문
    for(i = 0; i < STUDENTS; i++) // i는 0부터 STUDENTS-1(9)까지 반복
        sum += scores[i]; // scores[i] 값을 sum에 더함
    
    // 평균 계산
    average = (double)sum / STUDENTS; // 총합을 학생 수로 나누어 평균 계산 (double 형 변환)
    printf("average of score = %lf\n", average); // 계산된 평균을 출력

    return 0; // 프로그램 종료
}
