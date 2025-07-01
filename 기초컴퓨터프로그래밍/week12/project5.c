/**********************************
소프트웨어학부 2024042053 김여민
12주차 실습
call by value 와 call by reference
**********************************/

#include <stdio.h>

// 값 교환 함수 (call by value)
void swap1(int, int); 
// 주소를 통한 값 교환 함수 (call by reference)
void swap2(int *, int *);

int main(void) {
    int a = 10, b = 20; // 정수 변수 a와 b를 초기화
    printf("%d %d\n", a, b); // 변수 a와 b의 초기값 출력 (10 20)
    swap1(a, b); // a와 b의 값을 인수로 전달 (call by value)
    printf("%d %d\n", a, b); // a와 b의 값은 변경되지 않음 (10 20)
    swap2(&a, &b); // a와 b의 주소를 인수로 전달 (call by reference)
    printf("%d %d\n", a, b); // a와 b의 값이 교환됨 (20 10)
    return 0; // 프로그램 종료
}

// 주소를 통해 값 교환 (call by reference)
void swap2(int *ap, int *bp) { // int *ap = &a; int *bp = &b; :: call by reference
    int temp; // 임시 변수 temp 선언
    temp = *ap; // main() 함수 a의 값을 swap2() 함수의 지역 변수 temp에 대입
    *ap = *bp; // main() 함수 b의 값을 main() 함수의 a 값으로 대입
    *bp = temp; // temp의 값을 main() 함수의 b 값으로 대입
}

// 값을 복사하여 교환 (call by value)
void swap1(int a, int b) { // int a = 10, int b = 20; copy :: call by value
    int temp; // 임시 변수 temp 선언
    temp = a; // 변수 a의 값을 지역 변수 temp에 대입
    a = b; // 변수 b의 값을 변수 a에 대입
    b = temp; // temp의 값을 변수 b에 대입
    // 이 함수는 지역 변수에서만 변경되며 main()의 변수에는 영향을 미치지 않음
}
