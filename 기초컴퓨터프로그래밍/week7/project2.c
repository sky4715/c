/**********************************
소프트웨어학부 2024042053 김여민
7주차 실습
1부터 9까지 더하기
**********************************/

#include <stdio.h>

int main(void){
    // 초기값 설정
    int b = 1, sum = 0;

    // while문: b가 10보다 작을 때까지 반복
    while(b < 10){
        sum += b; // sum에 b를 더함 (sum = sum + b)
        b++; // b를 1씩 증가
    }
    printf("while :: %d", sum); // while문으로 계산된 합계 출력

    printf("%\n"); // 잘못된 형식이므로 "\n"으로 변경해야 함

    // sum을 0으로 다시 초기화
    sum = 0;

    // for문: c를 1부터 9까지 증가시키며 반복
    for(int c = 1; c < 10; c++){
        sum += c; // sum에 c를 더함 (sum = sum + c)
    }
    printf("for :: %d", sum); // for문으로 계산된 합계 출력

    return 0;
}
