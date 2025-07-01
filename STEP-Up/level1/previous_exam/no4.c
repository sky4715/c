#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int n, sum = 0;  // 정수형 변수 n과 sum을 선언 (sum은 합계를 저장하는 변수, 초기값은 0)

    scanf("%d", &n);  // 사용자로부터 첫 번째 숫자 n을 입력받음
    while(n != 0){  // n이 0이 아닐 때까지 반복
        sum += n;  // sum에 n을 더함 (누적합 계산)
        scanf("%d", &n);  // 다음 숫자 n을 입력받음
    }
    printf("%d", sum);  // 최종 누적합을 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
