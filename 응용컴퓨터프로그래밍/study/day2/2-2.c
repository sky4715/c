#include <stdio.h>

float find_max(float a, float b, float c);
float find_min(float a, float b, float c);

int main(){
    float num1, num2, num3;
    float max, min, difference;

    printf("세 개의 수를 입력하세요.\n\n");
    printf("첫 번째 수: ");
    scanf("%f", &num1);
    printf("두 번째 수: ");
    scanf("%f", &num2);
    printf("세 번째 수: ");
    scanf("%f", &num3);

    max = find_max(num1, num2, num3);
    min = find_min(num1, num2, num3);

    difference = max - min;
    printf("가장 큰 수와 작은 수의 차이 = %f", difference);
}

float find_max(float a, float b, float c){
    float max = 0;

    max = (a > b) ? (a > c) ? a : c : b;

    return max;
}

float find_min(float a, float b, float c){
    float min = 0;

    min = (a < b) ? (a < c) ? a : c : b;

    return min;
}