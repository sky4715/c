/**********************************
소프트웨어학부 2024042053 김여민
9주차 8주차 미션
유클리드 공식 이용한 계산 프로그램
**********************************/

#include <stdio.h>  // 표준 입출력 라이브러리 포함
#include <math.h>   // 수학 함수 라이브러리 포함 (sqrt, pow 함수 사용을 위해)

// 함수 원형 선언
double xy();  // 좌표값 입력 함수 원형
double get_distance(double, double, double, double);  // 두 점 사이의 거리 계산 함수 원형

int main(void) {  // 메인 함수 시작
    double x1, y1, x2, y2;  // 두 점의 x, y 좌표를 저장할 변수 선언
    
    printf("첫번째 점의 좌표를 입력하시오: (x, y) ");  // 첫 번째 점의 좌표 입력 안내 메시지 출력
    x1 = xy();  // 첫 번째 점의 x 좌표 입력받기 (xy 함수 호출)
    y1 = xy();  // 첫 번째 점의 y 좌표 입력받기 (xy 함수 호출)
    
    printf("두번째 점의 좌표를 입력하시오: (x, y) ");  // 두 번째 점의 좌표 입력 안내 메시지 출력
    x2 = xy();  // 두 번째 점의 x 좌표 입력받기 (xy 함수 호출)
    y2 = xy();  // 두 번째 점의 y 좌표 입력받기 (xy 함수 호출)
    
    // 두 점 사이의 거리를 계산하고 결과 출력
    printf("두 점 사이의 거리는 %f입니다.\n", get_distance(x1, y1, x2, y2));
    
    return 0;  // 프로그램 종료
}

// 좌표값을 입력받는 함수 정의
double xy() {  // 좌표값 입력 함수 시작
    double in;  // 입력된 값을 저장할 변수 선언
    scanf("%lf", &in);  // 사용자로부터 실수 값을 입력받아 변수에 저장
    return in;  // 입력된 값을 반환
}

// 두 점 사이의 거리를 계산하는 함수 정의
double get_distance(double x1, double y1, double x2, double y2) {  // 거리 계산 함수 시작
    // 유클리드 거리 공식을 이용해 두 점 사이의 거리 계산
    double res = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));  
    return res;  // 계산된 거리를 반환
}
