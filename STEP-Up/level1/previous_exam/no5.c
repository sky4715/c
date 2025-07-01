#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int n, m;  // 정수형 변수 n과 m을 선언

    scanf("%d\n%d", &n, &m);  // 사용자로부터 n(행 수)과 m(열 수)을 입력받음
    
    for(int y = 1; y <= n; y++){  // y는 1부터 n까지 반복 (n은 출력할 행의 수)
        for(int x = 0; x < m; x++)  // x는 0부터 m-1까지 반복 (m은 출력할 별의 개수, 즉 열의 수)
            printf("*");  // 별을 출력
        printf("\n");  // 한 행의 별을 모두 출력한 후 줄 바꿈
    }    

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
