#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int a, b;  // 두 정수형 변수 a와 b를 선언

    scanf("%d %d", &a, &b);  // 사용자로부터 두 개의 정수를 입력받아 변수 a와 b에 저장
    printf("%d", a + b);  // a와 b의 합을 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
