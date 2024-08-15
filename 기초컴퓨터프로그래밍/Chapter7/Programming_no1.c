#include <stdio.h>
#include <windows.h>

int main(void){
    int second;

    printf("카운터의 초기값을 입력하시오(단위: 초): ");
    scanf("%d", &second);

    for(int  i = second; i > 0; i--)
        printf("%d ", i);
        Sleep(1000); //Sleep()은 명령어의 실행시간을 지연시키는 함수로 windows.h에 정의(1초를 지연시키고 싶다면 인자값으로 1000을 넣기)
    
    printf("\a");
    return 0;
}