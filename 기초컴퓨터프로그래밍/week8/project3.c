/**********************************
소프트웨어학부 2024042053 김여민
8주차 실습
함수를 이용한 두 수의 덧셈
**********************************/
#include <stdio.h>

// 정수를 입력받는 함수 선언 (매개변수 없음, 반환값 있음)
int get_integer();

// 두 정수를 더하는 함수 선언 (매개변수 있음, 반환값 있음)
int add(int x, int y);

int main(void){
    // 사용자로부터 두 정수를 입력받아 x와 y에 저장
    int x = get_integer();
    int y = get_integer();

    // x와 y를 더한 결과를 sum에 저장
    int sum = add(x, y);

    // 두 수의 합을 출력
    printf("Sum of two numbers: %d\n", sum);

    return 0;  // 프로그램 종료
}

// 사용자로부터 정수를 입력받아 반환하는 함수 정의
int get_integer(){
    int value;  // 입력받은 정수를 저장할 변수

    printf("Enter Integer: ");  // 사용자에게 정수 입력을 요청
    scanf("%d", &value);  // 입력된 정수를 value에 저장

    return value;  // 입력된 정수를 반환
}

// 두 정수를 더하여 결과를 반환하는 함수 정의
int add(int x, int y){
    return x + y;  // x와 y의 합을 반환
}

