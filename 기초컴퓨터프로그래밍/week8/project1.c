/**********************************
소프트웨어학부 2024042053 김여민
8주차 실습
함수를 사용하지 않고 두 수를 입력하여 큰 수를 출력
**********************************/
#include <stdio.h>

int main(void){
    int n1, n2, max;  // 두 정수와 최대값을 저장할 변수 선언
    
    // 사용자에게 두 개의 정수를 입력받도록 안내
    printf("Enter two numbers in order: ");
    scanf("%d %d", &n1, &n2);  // 사용자로부터 두 정수를 입력받아 n1과 n2에 저장
    
    // n1과 n2를 비교하여 더 큰 값을 max에 저장
    if(n1 >= n2)       // 만약 n1이 n2보다 크거나 같다면
        max = n1;      // max에 n1을 저장
    else if(n1 <= n2)  // 만약 n1이 n2보다 작거나 같다면
        max = n2;      // max에 n2를 저장
    else
        max = 0;       // 이 부분은 불필요하며 실행되지 않음

    // max가 0이면 두 수가 같음을 출력하고, 그렇지 않으면 큰 수를 출력
    if(max == 0)
        printf("Same");  // 두 수가 같으면 "Same" 출력
    else
        printf("The bigger number: %d", max);  // 그렇지 않으면 큰 수를 출력

    return 0;  // 프로그램 종료
}
