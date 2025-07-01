#include <stdio.h>
#include <math.h>
#define NUMMAX 10

void get_data();
float calc_average();
float calc_stdev(float mean);
float num[NUMMAX];
int n;

int main(){
    float avg, stdev;
    get_data();
    avg = calc_average();
    stdev = calc_stdev(avg);
    printf("\n    평균 = %.2f\n", avg);
    printf("표준편차 = %.2f\n", stdev);
}

void get_data(){
    printf("최대 10 개의 실수를 입력하세요.\n");
    printf("입력을 종료하려면 0 이하의 수를 입력하세요.\n\n");
    n = 0;
    while(n < 10){
        printf("숫자 %d: ", n + 1);
        scanf("%f", &num[n]);
        if(num[n] > 0.0)
            n++;
        else
            break;
    }
}

float calc_average(){
    float avg, sum = 0.0;
    for(int k = 0; k < n; k++)
        sum += num[k];
    avg = sum / (float)n;
    return avg;
}

float calc_stdev(float mean){
    float sum = 0.0, diff, variance, stdev;
    int k;
    for(int i = 0; i < n; i++){
        diff = num[i] - mean;
        sum = sum + diff * diff;
    }
    variance = sum / (float)n;
    stdev = sqrt(variance);
    return stdev;
}