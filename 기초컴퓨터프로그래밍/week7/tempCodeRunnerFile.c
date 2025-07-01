#include <stdio.h>

int main(void){
    char alphabet;
    int n1, n2;

    while(1){

        printf("*****************\n");
        printf("A or a---- Add\n");
        printf("S or s---- Subtract\n");
        printf("M or m---- Multiply\n");
        printf("D or d---- Divide\n");
        printf("Q or q---- Quit\n");
        printf("*****************\n");
        
        printf("연산을 선택하시오:");
        scanf("%c", &alphabet);
        getchar();

        if(alphabet == 'A' || alphabet == 'a'){
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2);
            printf("두 수의 합 : %d\n", n1 + n2);
        }
        else if(alphabet == 'S' || alphabet == 's'){
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2);
            printf("두 수의 차 : %d\n", n1 - n2);
        }
        else if(alphabet == 'M' || alphabet == 'm'){
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2);
            printf("두 수의 곱 : %d\n", n1 * n2);
        }
        else if(alphabet == 'D' || alphabet == 'd'){
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &n1, &n2);
            if(n2 == 0)
                printf("나누는 수는 0이 아니어야 합니다.");
            else
                printf("두 수의 나눗셈 : %d\n", n1 / n2);
        }
        else if(alphabet == 'Q' || alphabet == 'q'){
            printf("finish!!");
            break;
        }
        else {
            printf("사용할 수 없는 연산입니다.\n");
        }
        getchar();
    }
    return 0;
}