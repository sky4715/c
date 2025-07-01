#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define MAX_LEN 100 // input 파일 한 줄 읽어오기 위한 최대 길이

//기존 버전 구조체 polynomial
typedef struct{
    int degree; // 다항식 최대 차수
    int *coef; // 계수 동적 배열 포인터
}polynomial;

//개선된 버전 구조체 polynomial1
typedef struct{
    int coef; // 계수
    int expon; // 지수
}polynomial1;
polynomial1 *poly; // 다항식 구조체 포인터

//연결리스트 구조체1 term
typedef struct{
    int coef; // 계수
    int exp; // 지수
} term;
//연결리스트 구조체2 polyNode
typedef struct polyNode *polyPointer; //polyNode 구조체 포인터
typedef struct polyNode{
    int coef; // 계수
    int exp; // 지수
    polyPointer link; // 다음 노드 포인터
}polyNode;


// 밀리초 단위 시간 측정
double current_millis() {
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    return ts.tv_sec + ts.tv_nsec / 1e9;
}

// 파일에서 다항식 항 읽어오기(초기버전)
void read_terms(FILE *input, int acoef[], int aexp[], int n) {
    char line[MAX_LEN]; // 한 줄 읽어오기
    for (int i = 0; i < n; i++) {
        fgets(line, MAX_LEN, input); // 한 줄 읽어오기
        sscanf(line, "%d %d", &acoef[i], &aexp[i]); // 계수와 지수 읽어오기
    }
}
// 파일에서 다항식 항 읽어오기(개선된 버전)
void readTerms(FILE *input, polynomial1 *poly, int n) { 
    char line[MAX_LEN]; // 한 줄 읽어오기
    for (int i = 0; i < n; i++) { 
        fgets(line, MAX_LEN, input); // 한 줄 읽어오기
        sscanf(line, "%d %d", &poly[i].coef, &poly[i].expon); // 계수와 지수 읽어오기
    }
}
// 파일에서 다항식 항 읽어오기(연결리스트)
void ReadTerms(FILE *input, term *poly, int n) {
    char line[MAX_LEN]; // 한 줄 읽어오기
    for (int i = 0; i < n; i++) {
        fgets(line, MAX_LEN, input); // 한 줄 읽어오기
        sscanf(line, "%d %d", &poly[i].coef, &poly[i].exp); // 계수와 지수 읽어오기
    }
}

// 내림차순 정렬(기존 버전)
void sort_terms_desc(int acoef[], int aexp[], int n) {
    int tmp;
    for (int i = 0; i < n - 1; i++) { // 버블 정렬
        for (int j = i + 1; j < n; j++) {
            if (aexp[i] < aexp[j]) { // 지수 비교
                tmp = aexp[i]; // 지수 교환
                aexp[i] = aexp[j]; 
                aexp[j] = tmp;

                tmp = acoef[i]; // 계수 교환
                acoef[i] = acoef[j];
                acoef[j] = tmp;
            }
        }
    }
}
// 내림차순 정렬(개선된 버전)
void sortTermsDesc(polynomial1 *poly, int start, int finish) {
    polynomial1 tmp;
    for (int i = start; i <= finish - 1; i++) { // 버블 정렬
        for (int j = i + 1; j <= finish; j++) {
            if (poly[i].expon < poly[j].expon) { // 지수 비교
                tmp = poly[i]; // 지수 교환
                poly[i] = poly[j];
                poly[j] = tmp;
            }
        }
    }
}
// 내림차순 정렬(연결리스트)
void SortTermsDesc(term s[], int n) {
    term tmp;
    for (int i = 0; i < n - 1; i++) { // 버블 정렬
        for (int j = i + 1; j < n; j++) {
            if (s[i].exp < s[j].exp) { // 지수 비교
                tmp = s[i]; // 지수 교환
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

// term 배열을 polynomial로 변환(기존 버전)
polynomial terms_to_polynomial(int acoef[], int aexp[], int n) {
    polynomial p; // 구조체 p 선언
    p.degree = aexp[0]; // 최대 차수 degree
    //동적 메모리 할당
    p.coef = (int *)malloc((p.degree + 1)*sizeof(int));
    // 초기화
    for (int i = 0; i <= p.degree; i++) {
        p.coef[i] = 0; // 계수 초기화
    }
    // 계수 입력
    for (int i = 0; i < n; i++) {
        int index = p.degree - aexp[i]; // 지수에 따라 인덱스 계산
        p.coef[index] = acoef[i]; // 계수 저장
    }

    return p; // 다항식 반환
}
//term 배열을 연결리스트 polyPointer로 변환(연결리스트)
polyPointer initialPolyNode(int n, term s[]){
    // 첫 번째 노드 동적 메모리 할당
    polyPointer temp= (polyPointer)malloc(sizeof(polyNode));
    
    temp->coef = s[0].coef; // 첫 항 계수
    temp->exp = s[0].exp; // 첫 항 지수
    temp->link = NULL; // 다음 노드 포인터 초기화

    // 리스트 시작점 head, 이전 노드 가르키는 prev 포인터
    polyPointer head = temp, prev = temp;
    // 나머지 항들 연결리스트 추가
    for(int i=1;i<n;++i){
        prev = temp; // temp 노드 prev로 설정
        temp = (polyPointer)malloc(sizeof(polyNode)); // temp 노드 동적 메모리 할당
        temp->coef = s[i].coef; // 계수 저장
        temp->exp = s[i].exp; // 지수 저장
        temp->link = NULL; // 다음 노드 포인터 초기화
        prev->link = temp; // 이전 노드의 링크를 현재 노드로 설정
    }

    return head; // 연결리스트 반환
}

// 다항식 출력(기존버전)
void print_polynomial(polynomial p, FILE *output) {
    int count = 0; // 항 개수 카운트
    for (int i = 0; i <= p.degree; i++) {
        if (p.coef[i] != 0) { // 계수가 0이 아니면
            if (count > 0) fprintf(output, " + "); // 첫 항이 아니면 +
            fprintf(output, "%dx^%d", p.coef[i], p.degree - i); // 계수와 지수 출력
            count++; // 항 개수 증가
        }
    }
    fprintf(output, "\n"); // 줄 바꿈
}
// 다항식 출력(개선된 버전)
void printPolynomial(polynomial1 *poly, int start, int finish, FILE *output) {
    int count = 0; // 항 개수 카운트
    for (int i = start; i <= finish; i++) {
        if (poly[i].coef != 0) { // 계수가 0이 아니면
            if (count > 0) fprintf(output, " + ");  // 첫 항이 아니면 +
            fprintf(output, "%dx^%d", poly[i].coef, poly[i].expon); // 계수와 지수 출력
            count++; // 항 개수 증가
        }
    }
    fprintf(output, "\n"); // 줄 바꿈
}
//다항식 출력(연결리스트)
int printPolyNode(polyPointer head, FILE *output){
    polyPointer temp = head; // 연결리스트 포인터
    while(temp != NULL){ // 연결리스트 순회
        if(temp->link != NULL){ // 마지막 항이 아니면
            fprintf(output, "%dx^%d + ", temp->coef, temp->exp); // 계수와 지수 출력
        }else{ // 마지막 항이면
            fprintf(output, "%dx^%d", temp->coef, temp->exp); // 계수와 지수 출력
        }

        temp = temp->link; // 다음 노드로 이동
    }
    fprintf(output, "\n"); // 줄 바꿈
    return 0;
}

// Zero: 다항식을 0으로 초기화
polynomial Zero(int degree){
    polynomial p; // 다항식 구조체
    p.degree = degree; // 최대 차수
    p.coef = (int *)malloc((p.degree + 1)*sizeof(int)); // 동적 메모리 할당
    for(int i = 0; i <= p.degree; i++){
        p.coef[i] = 0; // 계수 초기화
    }
    return p; // 다항식 반환
}

// IsZero: 모든 계수가 0이면 true
bool IsZero(polynomial p){
    for(int i = 0; i <= p.degree; i++){ // 계수 체크
        if(p.coef[i] != 0){ // 계수가 0이 아니면
            return false;// 비어있지 않으면 false
        }
    }
    return true; // 비어있으면 true
}

// Coef: 특정 차수의 계수를 반환
int Coef(polynomial p, int expon){
    int index = p.degree - expon; // 지수에 해당하는 인덱스
    if(index < 0 || index > p.degree){ // 유효한 인덱스 범위 체크
        return 0; // 해당 차수가 없으면 0 반환
    }
    return p.coef[index];// 계수 반환
}

// Lead_Exp: 최고 차항의 지수를 반환
int Lead_Exp(polynomial p){
    for(int i = 0; i <= p.degree; i++){ // 최고 차항 찾기
        if(p.coef[i] != 0){ // 계수가 0이 아니면
            return p.degree - i; // 최고 차항의 지수 반환
        }
    }
    return -1; // 다항식이 0이면 -1 반환
}

// Attach: 다항식에 항을 추가(기존 버전)
polynomial Attach(polynomial p, int coef, int expon){
    int index = p.degree - expon; // 지수에 해당하는 인덱스
    if(p.coef[index] != 0){ // 계수가 0이 아니면
        printf("ERROR"); // 이미 존재하는 항이면 오류
    }
    else{ // 계수가 0이면
        p.coef[index] = coef; // 계수 추가
    }
    return p; // 다항식 반환
}
// attach: 새로운 항 첨가(개선된 버전)
void attach(int coef, int expon, int* avail, polynomial1 **poly) {
    *poly = realloc(*poly, sizeof(polynomial1) * (*avail + 1)); // 동적 메모리 재할당
    (*poly)[*avail].coef = coef; // 계수 추가
    (*poly)[*avail].expon = expon; // 지수 추가
    (*avail)++; // 인덱스 증가
}
//attachPolyNode: 새로운 항 첨가(연결리스트)
int attachPolyNode(int coef, int exp, polyPointer* rear){
    polyPointer temp = (polyPointer)malloc(sizeof(polyNode)); // 새로운 노드 생성
    temp->coef = coef; // 계수 추가
    temp->exp = exp; // 지수 추가
    temp->link = NULL; // 다음 노드 포인터 초기화

    if (*rear) { // 연결리스트가 비어있지 않으면
        (*rear)->link = temp; // 이전 노드의 링크를 새로운 노드로 설정
    }
    *rear = temp; // 현재 노드를 rear로 설정
    return 0;
}

// Remove: 다항식에 항 제거
polynomial Remove(polynomial p, int expon){
    int index = p.degree - expon; // 지수에 해당하는 인덱스
    if(p.coef[index] != 0){ // 계수가 0이 아니면
        p.coef[index] = 0; // 계수 제거
    }
    else{ // 계수가 0이면
        printf("ERROR"); // 이미 존재하지 않는 항이면 오류
    }
    return p; // 다항식 반환
}

// COMPARE: 두 항의 지수 비교
int COMPARE(int exp1, int exp2){
    if(exp1 < exp2) // a1 < a2
        return -1;
    else if(exp1 == exp2) // a1 = a2
        return 0;
    else // a1 > a2
        return 1;
}

//addPolyNode: 두 다항식 덧셈(연결리스트)
polyPointer addPolyNode(polyPointer a, polyPointer b){
    // 다항식 결과의 시작과 마지막 가리킬 헤드와 리어 포인터
    polyPointer head = NULL, rear = NULL;
    int sum;
    rear = (polyPointer)malloc(sizeof(polyNode)); // rear 노드 동적 메모리 할당
    rear->coef = 0; // 계수 초기화
    rear->exp = 0; // 지수 초기화
    rear->link = NULL; // 다음 노드 포인터 초기화
    head = rear; // head 포인터가 rear를 가리킴
    while(a != NULL && b != NULL){ // 두 다항식이 비어있지 않을 때까지 반복
        switch(COMPARE(a->exp, b->exp)){ // a와 b의 지수 비교
            case -1: // a < b
                attachPolyNode(b->coef, b->exp, &rear); // b의 항을 추가
                b = b->link; // b의 항을 rear 다음에 추가
                break;
            case 0: // a = b
                sum = a->coef + b->coef; // 동일 차수 계수 합
                if(sum){ // 합이 0이 아니면
                    attachPolyNode(sum, a->exp, &rear); //결과 다항식에 합 추가
                }
                a = a->link; // a의 항을 rear 다음에 추가
                b = b->link; // b의 항을 rear 다음에 추가
                break;
            case 1: // a > b
                attachPolyNode(a->coef, a->exp, &rear); // a의 항을 추가
                a = a->link; // a의 항을 rear 다음에 추가
                break; 
        }   
    }
    for(;a;a=a->link){ //a에 남은 항을 결과에 추가
        attachPolyNode(a->coef, a->exp, &rear); // a의 항을 rear 다음에 추가
    }
    for(;b;b=b->link){ // b에 남은 항을 결과에 추가
        attachPolyNode(b->coef, b->exp, &rear); // b의 항을 rear 다음에 추가
    }
    rear->link = NULL; // 마지막 노드의 링크를 NULL로 설정

    return head->link; // 결과 다항식 반환
}

//freePolyNode: 다항식 메모리 해제(연결리스트)
int freePolyNode(polyPointer head){
    polyPointer temp = head,next=NULL; // head 가리키는 temp, 다음 노드 가리킬 next 포인터
    // 연결리스트 순회하며 메모리 해제
    while(temp != NULL){ //현재 노드가 NULL이 아닐 때까지 반복
        next = temp->link; // 다음 노드 저장
        free(temp); // 현재 노드 메모리 해제
        temp = next; // 다음 노드로 이동
    }
    return 0;
}

int main(int argc, char *argv[]){
    //시작 시간 측정(파일 열기)
    double start_time = current_millis();

    //input 파일 읽어오기
    FILE *input = fopen(argv[1], "r");
    char line[MAX_LEN];
    //output 파일 열기
    FILE *output = fopen(argv[2], "w");

    // 종료 시간 측정(파일 열기)
    double end_time = current_millis();


    //-------------------------------------기존 버전 시작

    //시작 시간 측정(기존 버전)
    double start_time0 = current_millis();

    //첫 줄 읽기: 지수 개수 2개
    fgets(line, MAX_LEN, input);
    int n1, n2;
    sscanf(line, "%d %d", &n1, &n2);

    //배열 a1coef, a1exp 선언
    int a1coef[n1];
    int a1exp[n1];
    //배열 a2coef, a2exp 선언
    int a2coef[n2];
    int a2exp[n2];

    // n1 줄들 읽어와 s1 저장
    read_terms(input, a1coef, a1exp, n1);
    // n2 줄들 읽어와 s2 저장
    read_terms(input, a2coef, a2exp, n2);

    //배열 s1 내림차순 정렬
    sort_terms_desc(a1coef, a1exp, n1);
    //배열 s2 내림차순 정렬
    sort_terms_desc(a2coef, a2exp, n2);

    //구조체 a1 초기화 후 s1 저장
    polynomial a1 = terms_to_polynomial(a1coef, a1exp, n1);
    //구조체 a2 초기화 후 s2 저장
    polynomial a2 = terms_to_polynomial(a2coef, a2exp, n2);
    
    //다항식 a1 출력
    print_polynomial(a1, output);
    //다항식 a2 출력
    print_polynomial(a2, output);


    //구조체 d 선언
    polynomial d;
    // 다항식 덧셈(초기버전)
    d = Zero(a1.degree > a2.degree ? a1.degree : a2.degree);
    int sum = 0; 
    while(!IsZero(a1) && !IsZero(a2)){
        int exp1 = Lead_Exp(a1); // 최고 차항 지수
        int exp2 = Lead_Exp(a2); // 최고 차항 지수
        
        switch(COMPARE(exp1, exp2)){ // 지수 비교
            case -1: // a1 < a2
                d = Attach(d, Coef(a2, exp2), exp2); // a2의 항을 d에 추가
                a2 = Remove(a2, exp2); // a2에서 해당 항 제거
                break;
            case 0: // a1 == a2
                sum = Coef(a1, exp1) + Coef(a2, exp2); /// 동일 차수 계수 합
                if(sum != 0){ // 합이 0이 아니면
                    d = Attach(d, sum, exp1); // 합한 계수를 d에 추가
                }
                else{ // 합이 0이면
                    d = Attach(d, 0, exp1); // 0을 d에 추가
                }
                    d = Attach(d, sum, exp1); // 합한 계수를 d에 추가
                }
                a1 = Remove(a1, exp1); // a1에서 해당 항 제거
                a2 = Remove(a2, exp2); // a2에서 해당 항 제거
                break;
            case 1: // a1 > a2
                d = Attach(d, Coef(a1, exp1), exp1); // a1의 항을 d에 추가
                a1 = Remove(a1, exp1); // a1에서 해당 항 제거
                break;
        }
    }
    //a1 또는 a2 나머지 항을 d에 삽입
    while(!IsZero(a1)){ // a1이 비어있지 않으면
        d = Attach(d, Coef(a1, Lead_Exp(a1)), Lead_Exp(a1)); // a1의 항을 d에 추가
        a1 = Remove(a1, Lead_Exp(a1)); // a1에서 해당 항 제거
    }
    while(!IsZero(a2)){ // a2가 비어있지 않으면
        d = Attach(d, Coef(a2, Lead_Exp(a2)), Lead_Exp(a2)); // a2의 항을 d에 추가
        a2 = Remove(a2, Lead_Exp(a2)); // a2에서 해당 항 제거
    }
    
    // 다항식 d 출력
    print_polynomial(d, output);

    // 종료 시간 측정(기존 버전)
    double end_time0 = current_millis();

    //------------------------------------기존 버전 종료


    //-----------------------------------개선된 버전 시작

    //시작 시간 측정(기존 버전)
    double start_time1 = current_millis();

    //파일 포인터 초기화
    rewind(input);
    //첫 줄 읽기: 지수 개수 2개
    fgets(line, MAX_LEN, input);
    sscanf(line, "%d\t%d", &n1, &n2);

    //구조체 poly 선언
    poly = (polynomial1 *)malloc(sizeof(polynomial1)* (n1 + n2 + 1000));

    // n1과 n2 줄들 읽어와 poly 저장
    readTerms(input, poly, n1+n2);

    //구조체 s1 내림차순 정렬
    sortTermsDesc(poly, 0, n1-1);
    //구조체 s2 내림차순 정렬
    sortTermsDesc(poly, n1, n1+n2-1);
    
    //다항식 a1 출력
    printPolynomial(poly, 0, n1-1,output);
    //다항식 a2 출력
    printPolynomial(poly, n1, n1+n2-1,output);


    //다항식 덧셈(개선된 버전)
    // starta, finisha, startb, finishb 선언
    int starta = 0; // 첫번째 다항식 시작 인덱스
    int finisha = n1 - 1; // 첫번째 다항식 끝 인덱스
    int startb = n1; // 두번째 다항식 시작 인덱스
    int finishb = n1 + n2 -1; // 두번째 다항식 끝 인덱스
    int *avail = (int*)malloc(sizeof(int)); // 새로운 항 저장할 위치 포인터 동적 메모리 할당
    *avail = n1 + n2; // 새로운 항 저장 위치 = 결과 다항식 시작 위치
    int finished; // 결과 다항식 끝 위치


    // 다항식 덧셈
    float coefficient; // 계수
    int startd = *avail; // 결과 다항식 시작 인덱스
    while(starta <= finisha && startb <= finishb){ // 두 다항식이 끝날 때까지 반복
        switch(COMPARE(poly[starta].expon, poly[startb].expon)){ // 지수 비교
            case -1: // a.expon < b.expon
                attach(poly[startb].coef, poly[startb].expon, avail, &poly); // b의 항을 결과에 추가
                startb++; // b 다음 항으로 이동
                break;
            case 0: // a.expon == b.expon
                coefficient = poly[starta].coef + poly[startb].coef; // 동일 차수 계수 합
                if(coefficient) // 합이 0이 아니면
                    attach(coefficient, poly[starta].expon, avail, &poly); // 합한 계수를 결과에 추가
                    starta++; // a 다음 항으로 이동
                    startb++; // b 다음 항으로 이동
                    break;
            case 1: // a.expon > b.expon
                attach(poly[starta].coef, poly[starta].expon, avail, &poly); // a의 항을 결과에 추가
                starta++; // a 다음 항으로 이동
                break;
        }
    }
    //a와 b 나머지 항 첨가
    for(; starta <= finisha; starta++){ // a에 남은 항을 결과에 추가
        attach(poly[starta].coef, poly[starta].expon, avail, &poly);
    }
    for(; startb <= finishb; startb++){ // b에 남은 항을 결과에 추가
        attach(poly[startb].coef, poly[startb].expon, avail,&poly);
    }
    finished = *avail - 1; // 결과 다항식 끝 인덱스

    //다항식 d 출력
    printPolynomial(poly, startd, finished, output);

    // 종료 시간 측정
    double end_time1 = current_millis();

    //----------------------------------------------개선된 버전 종료


    //----------------------------------------------연결리스트 버전 시작

    //시작 시간 측정(기존 버전)
    double start_time2 = current_millis();

    //파일 포인터 초기화
    rewind(input);
    //첫 줄 읽기: 지수 개수 2개
    fgets(line, MAX_LEN, input);
    sscanf(line, "%d\t%d", &n1, &n2);

    //구조체 s1, s2 선언
    term ls1[n1];
    term ls2[n2];

    // n1 줄들 읽어와 s1 저장
    ReadTerms(input, ls1, n1);
    // n2 줄들 읽어와 s2 저장
    ReadTerms(input, ls2, n2);

    //구조체 s1 내림차순 정렬
    SortTermsDesc(ls1, n1);
    //구조체 s2 내림차순 정렬
    SortTermsDesc(ls2, n2);

    //연결리스트 a, b 선언
    polyPointer la,lb;
    
    //구조체 a 초기화 후 s1 저장
    la = initialPolyNode(n1, ls1);
    //구조체 b 초기화 후 s2 저장
    lb = initialPolyNode(n2, ls2);

    //다항식 a 출력
    printPolyNode(la, output);
    //다항식 b 출력
    printPolyNode(lb, output);
    //다항식 덧셈(연결리스트)
    polyPointer c = addPolyNode(la, lb);
    //다항식 c 출력
    printPolyNode(c, output);

    // 종료 시간 측정
    double end_time2 = current_millis();

    //----------------------------------------연결리스트 종료

    //수행시간 기록
    // 수행 시간 기록(기존 버전)
    fprintf(output, "%.6f\t", (end_time - start_time) + (end_time0 - start_time0));
    // 수행 시간 기록(개선된 버전)
    fprintf(output, "%.6f\t", (end_time - start_time) + (end_time1 - start_time1));
    // 수행 시간 기록(연결리스트)
    fprintf(output, "%.6f\t", (end_time - start_time) + (end_time2 - start_time2));

    //메모리 헤제(malloc)
    // 메모리 해제(기존 버전)
    free(a1.coef);
    free(a2.coef);
    free(d.coef);
    // 메모리 해제(개선된 버전)
    free(avail);
    free(poly);
    //메모리 해제(연결리스트)
    freePolyNode(la);
    freePolyNode(lb);
    freePolyNode(c);

    //input 파일 닫기
    fclose(input);
    //output 파일 닫기
    fclose(output);
    return 0;

}