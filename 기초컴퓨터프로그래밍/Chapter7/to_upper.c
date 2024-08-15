/*소문자를 대문자로 변경*/
#include <stdio.h>

int main(void){
    char letter;
    
    while(1){
        printf("소문자를 입력하시오: ");
        scanf(" %c", &letter);//공백 문자 제외

        if(letter == 'Q')
            break;//대문자 Q가 입력되면 반복을 종료
        
        if(letter < 'a' || letter > 'z')
            continue;//소문자가 아니면 즉시 다음 반복을 시작

        letter -= 32; //소문자 -> 대문자
        printf("변환된 대문자는 %c입니다.\n", letter);
    }
    return 0;
}