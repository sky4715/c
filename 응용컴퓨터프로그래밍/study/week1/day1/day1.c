#include <stdio.h>
#define SUB(X, Y) X-Y
#define SQR(X) X*X
#define PRT(X) printf("계산 결과는 %d입니다", X)

int main(void){
    int result;
    int n1 = 10, n2 = 5;

    result = SUB(n1, n2);
    PRT(result);
    printf("\n");

    result = SQR(n1);
    PRT(result);
    return 0;
}