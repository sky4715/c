/*삼각함수 그리기*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree){
    return PI * degree / 180.0;
}

void drawbar(int height){
    for(int i = 0; i < height; i++)
        printf("*");
   
    printf("\n");
}

int main(void){
    int degree, x, y;
    
    for(degree = 10; degree <= 170; degree += 20){
        //싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭.
        y = (int)(60 * sin(rad((double)degree)) + 0.5);
        drawbar(y);
    }
    return 0;
}