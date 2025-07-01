/*함수의 인자 사용
두 개의 정수를 매개변수로 전달 받아 덧셈 결과를 반환하는 함수를 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

// add 함수 - 두 정수 a와 b를 더하는 함수
int add(int a, int b){
    return a + b;  // a와 b의 합을 반환
}

int main(void){  // main 함수 - 프로그램의 시작 지점
    int a, b;  // 정수형 변수 a와 b를 선언

    scanf("%d %d", &a, &b);  // 사용자로부터 두 정수 a와 b를 입력받음
    printf("%d", add(a, b));  // add 함수 호출하여 a와 b의 합을 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
