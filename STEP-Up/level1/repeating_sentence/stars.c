/*반복 구조 내의 또 다른 반복 구조에 의한 반복 실행
이중 반복문을 사용하여 입력받은 정수만큼 별을 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    for(int y = 1; y <= n; y++){
        for(int x = 1; x <= y; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}