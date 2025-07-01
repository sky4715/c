#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number;
    char *array;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    if (number > 2){
        array = (char *)calloc(number + 1, sizeof(char));

        if (array != NULL){
            printf("%d개의 배열을 할당하였습니다.\n", number + 1);
            int to = sqrt(number);

            for (int n = 2; n < to; n++){
                int last = number/n;

                for (int m = 2; m < last; m++){
                    int index = n * m;
                    
                    if (index <= number)
                        array[index] = 1;
                    else
                        break;
                }
            }

            for (int k = 2; k < number; k++)
                if(array[k] == 0)
                    printf("%2d ", k);

                free(array);
        }
    } 
    return 0;
}