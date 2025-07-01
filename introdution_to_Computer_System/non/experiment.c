#include <stdio.h>
#define R 3
#define C 2

int main(void){
    int A[R][C] = {{1, 2}, {4, 5}, {7, 8}};
    int B[C][R] = {{1, 0, 1}, {0, 1, 0}};
    int row, col, x;
    for(col = 0; col < C; col++){
        x = 0;
        for(row = 0; row < R; row++)
            x += A[row][col]*B[col][row];
        printf("%d", x);
    }
    return 0;
}