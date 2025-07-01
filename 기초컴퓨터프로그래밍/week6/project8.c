/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
계산기
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){
    int x, y, result = 0; // 변수 선언: x, y는 피연산자, result는 결과 저장
    char op; // 연산자를 저장할 변수 op 선언

    // 사용자로부터 수식을 입력받음 (예: 2 + 5)
    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y); // 정수 두 개와 연산자를 입력받음

    // 입력된 연산자에 따라 연산 수행
    switch(op){
        case '+': // 덧셈 연산
            result = x + y;
            break;
        case '-': // 뺄셈 연산
            result = x - y;
            break;
        case '*': // 곱셈 연산
            result = x * y;
            break;
        case '/': // 나눗셈 연산
            if (y != 0) // 0으로 나누는 경우를 방지
                result = x / y;
            else {
                printf("0으로 나눌 수 없습니다.\n");
                return 1; // 오류 종료
            }
            break;
        case '%': // 나머지 연산
            result = x % y;
            break;
        default: // 지원되지 않는 연산자인 경우
            printf("지원되지 않는 연산자입니다.\n");
            return 1; // 오류 종료
    }

    // 결과 출력
    printf("%d %c %d = %d\n", x, op, y, result); // 입력한 수식과 결과를 출력
    return 0; // 프로그램 정상 종료
}
