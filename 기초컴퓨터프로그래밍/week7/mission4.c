/**********************************
소프트웨어학부 2024042053 김여민
7주차 실습
미니 계산기 만드는 프로그램
**********************************/

#include <stdio.h>

int main(void) {
    char alphabet; // 사용자로부터 입력받을 연산 기호
    int n1, n2; // 두 개의 정수를 입력받을 변수

    while(1) { // 무한 반복문 시작

        // 메뉴 출력
        printf("*****************\n");
        printf("A or a---- Add\n");
        printf("S or s---- Subtract\n");
        printf("M or m---- Multiply\n");
        printf("D or d---- Divide\n");
        printf("Q or q---- Quit\n");
        printf("*****************\n");
        
        // 연산 선택 메시지 출력 및 입력 받기
        printf("연산을 선택하시오: ");
        scanf("%c", &alphabet); // 연산자를 입력받음
        getchar(); // 입력 버퍼에 남아있는 개행 문자 제거

        // 덧셈 연산 선택
        if (alphabet == 'A' || alphabet == 'a') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2); // 두 수 입력 받기
            printf("두 수의 합 : %d\n", n1 + n2); // 덧셈 결과 출력
        }
        // 뺄셈 연산 선택
        else if (alphabet == 'S' || alphabet == 's') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2); // 두 수 입력 받기
            printf("두 수의 차 : %d\n", n1 - n2); // 뺄셈 결과 출력
        }
        // 곱셈 연산 선택
        else if (alphabet == 'M' || alphabet == 'm') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2); // 두 수 입력 받기
            printf("두 수의 곱 : %d\n", n1 * n2); // 곱셈 결과 출력
        }
        // 나눗셈 연산 선택
        else if (alphabet == 'D' || alphabet == 'd') {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2); // 두 수 입력 받기
            // 나눗셈에서 0으로 나누는 경우 처리
            if (n2 == 0)
                printf("나누는 수는 0이 아니어야 합니다.\n");
            else
                printf("두 수의 나눗셈 : %d\n", n1 / n2); // 나눗셈 결과 출력
        }
        // 프로그램 종료 선택
        else if (alphabet == 'Q' || alphabet == 'q') {
            printf("finish!!\n"); // 종료 메시지 출력
            break; // 반복문 종료
        }
        // 올바르지 않은 입력 처리
        else {
            printf("사용할 수 없는 연산입니다.\n");
        }

        getchar(); // 입력 버퍼 정리
    }

    return 0; // 프로그램 종료
}
