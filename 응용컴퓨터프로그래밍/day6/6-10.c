#include <stdio.h>
#define ROWS 3
#define COLS 3

double get_row_avg(int m[][COLS], int r){
    int *p, *endp;
    double sum = 0.0;

    p = &m[r][0];
    endp = &m[r][COLS];
    
    while(p < endp)
        sum += *p++;
    
    sum /= COLS;
    return sum;
}

double get_total_avg(int m[][COLS]){
    int *p, *endp;
    double sum = 0.0;

    p = &m[0][0];
    endp = &m[ROWS-1][COLS];

    while(p < endp)
        sum += *p++;
    
    sum /= ROWS * COLS;
    return sum;
}

int main(void){
    int m[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    printf("avg m[0] = %.2f\n", get_row_avg(m, 0));
    printf("avg m[1] = %.2f\n", get_row_avg(m, 1));
    printf("avg m[2] = %.2f\n", get_row_avg(m, 2));
    printf("avg Tot = %.2f\n", get_total_avg(m));
}