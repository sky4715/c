/*구구단 추천 프로그램*/
#include <stdio.h>

int main(void){
    int i = 1;

loop: 
    printf("%d * %d = %d\n", 3, i, 3 * i);
    i++;
    if(i == 10)
        goto end;//i가 1이 되면 레이블 end로 점프
    goto loop;

end:
    return 0;
}