/*자료형에 따른 데이터 입력
정수, 실수, 문자를 입력받고 출력하는 프로그램을 작성하시오.*/
#include <stdio.h>  // 표준 입출력 헤더 파일을 포함

int main(void){  // main 함수 - 프로그램의 시작 지점
    int integer;  // 정수형 변수 integer를 선언
    float realnum;  // 실수형 변수 realnum을 선언
    char sentence;  // 문자형 변수 sentence를 선언

    scanf("%d %f %c", &integer, &realnum, &sentence);  // 사용자로부터 정수, 실수, 문자 값을 입력받음
    printf("%d\n%.2f\n%c", integer, realnum, sentence);  // 입력받은 값을 각 형식에 맞게 출력
    // %d는 정수형 출력, %.2f는 소수점 이하 2자리까지 출력, %c는 문자형 출력

    return 0;  // 프로그램이 성공적으로 종료되었음을 나타내는 0을 반환
}
