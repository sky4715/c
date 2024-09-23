#include <stdio.h>

int main(void){
    int sum = 0;
    int arr[5] = {1, 1, 1, 1, 1};
    scanf("%d %d", &arr[3], &arr[4]);

    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
