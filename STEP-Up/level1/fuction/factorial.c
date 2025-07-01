/*함수의 값 반환
함수를 사용하여 factorial를 계산하는 프로그램을 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

// factorial 함수 - 주어진 정수 n의 팩토리얼을 계산하는 함수
int factorial(){
    int n, mul = 1;  // 정수형 변수 n과 mul을 선언 (mul은 팩토리얼 계산을 위한 변수, 초기값은 1)
    scanf("%d", &n);  // 사용자로부터 n을 입력받음

    for(int i = 1; i <= n; i++){  // 1부터 n까지 반복
        mul *= i;  // mul에 i를 곱해 팩토리얼을 계산
    }

    return mul;  // 계산된 팩토리얼 값을 반환
}

int main(void){  // main 함수 - 프로그램의 시작 지점
    int result = factorial();  // factorial 함수 호출하여 결과를 result에 저장
    printf("%d", result);  // 팩토리얼 결과를 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
