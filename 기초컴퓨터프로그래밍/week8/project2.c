/**********************************
소프트웨어학부 2024042053 김여민
8주차 실습
세 가지 숫자 입력 받고 그 중 앞의 두 숫자 중 큰 숫자를 출력
**********************************/
#include <stdio.h>

// 정수를 입력받는 함수 선언 (매개변수 없음, 정수형 반환값 있음)
int inputNum(); 

// 두 정수를 비교하여 큰 값을 반환하는 함수 선언 (매개변수 있음, 정수형 반환값 있음)
int maxNum(int, int);

// 최대값을 출력하는 함수 선언 (매개변수 있음, 반환값 없음)
void maxPrint(int);

int main(void){
    int n1, n2, n3, max;  // 세 정수를 저장할 변수와 최대값을 저장할 변수 선언

    // 세 정수를 사용자로부터 입력받아 n1, n2, n3에 저장
    n1 = inputNum();
    n2 = inputNum();
    n3 = inputNum();

    // 입력된 세 정수를 출력
    printf("Call and Output the function: %d %d %d\n", n1, n2, n3);

    // n1과 n2 중 더 큰 값을 max에 저장
    max = maxNum(n1, n2);

    // max 값을 출력
    maxPrint(max);

    return 0;  // 프로그램 종료
}

// 사용자로부터 정수를 입력받아 반환하는 함수 정의
int inputNum(){
    int n1;  // 입력받은 정수를 저장할 변수

    printf("Enter Integer: ");  // 사용자에게 정수 입력을 요청
    scanf("%d", &n1);  // 입력받은 정수를 n1에 저장

    return n1;  // 입력된 정수를 반환
}

// 두 정수를 비교하여 더 큰 값을 반환하는 함수 정의
int maxNum(int n1, int n2){
    int max;  // 더 큰 값을 저장할 변수

    if(n1 > n2)         // n1이 n2보다 크면
        max = n1;       // max에 n1 저장
    else if(n1 < n2)    // n2가 n1보다 크면
        max = n2;       // max에 n2 저장
    else
        max = 0;        // 두 값이 같으면 max에 0 저장
    
    return max;  // 비교 결과 반환
}

// 최대값을 출력하는 함수 정의
void maxPrint(int max){
    if (max == 0)  // max가 0일 경우 두 값이 같음을 의미
        printf("Same");  // 동일함을 출력
    else
        printf("The bigger number: %d", max);  // max가 0이 아니면 큰 값 출력
}
