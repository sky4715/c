/**********************************
소프트웨어학부 2024042053 김여민
8주차 실습
0부터 입력받은 정수 까지의 합
**********************************/
#include <stdio.h>

// 0부터 n까지의 합을 계산하는 함수 선언 (매개변수 있음, 반환값 있음)
int calculateSum(int);

int main(void){
    int n, sum = 0;  // n: 사용자 입력 정수, sum: 합계를 저장할 변수

    // 사용자에게 정수 입력 요청
    printf("정수를 입력하시오: ");
    scanf("%d", &n);  // 입력받은 정수를 n에 저장

    // calculateSum 함수를 호출하여 0부터 n까지의 합을 계산하고 sum에 저장
    sum = calculateSum(n);

    // 결과 출력
    printf("0부터 %d까지의 합은 %d입니다.\n", n, sum);
    return 0;  // 프로그램 종료
}

// n까지의 정수 합을 계산하여 반환하는 함수 정의
int calculateSum(int n){
    int sum = 0;  // 합계를 저장할 변수 초기화

    // 0부터 n까지 반복하여 합계 계산
    for(int i = 0; i <= n; i++)
        sum += i;  // i 값을 sum에 추가
    
    return sum;  // 계산된 합계를 반환
}
