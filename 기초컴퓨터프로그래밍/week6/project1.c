/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
XOR을 이용한 암호화
**********************************/

#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void){ // 메인 함수 시작
    char data = 'a'; // 변수 data에 문자 'a' 할당
    char key = 0xff; // 암호화 키로 사용할 0xff 값을 변수 key에 할당
    char encrpted_data, orig_data; // 암호화된 데이터와 복원된 데이터를 저장할 변수 선언

    printf("원래의 문자=%c\n", data); // 원래의 문자를 출력

    encrpted_data = data^key; // XOR 연산을 통해 원래 문자(data)를 암호화하여 encrpted_data에 저장
    printf("암호화된 문자=%c\n", encrpted_data); // 암호화된 문자를 출력

    orig_data = encrpted_data ^ key; // 암호화된 문자에 다시 XOR 연산을 수행하여 원래 문자로 복원
    printf("복원된 문자=%c", orig_data); // 복원된 문자를 출력

    return 0; // 프로그램 종료
}