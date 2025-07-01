/**********************************
소프트웨어학부 2024042053 김여민
6주차 실습
no.3
**********************************/
//////////////////////////////////////////////////////////
//==========입력 받은 세 정수 정렬하기(내림차순)=============//
//////////////////////////////////////////////////////////

//세 정수 입력 받기
#include <stdio.h>

int main(void){
    int n1, n2, n3;
    printf("정수 세 개 입력 : \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    //1. if else 중첩 구문을 이용한 판별 방법
    if(n1 == n2 && n2 == n3){          //세 수가 동일한 경우
        printf("all same number");
    }
    else{    //n1, n2, n3가 모두 다를 경우에 아래 if else구문으로 판별함
        if(n1>n2){          //n1 > n2의 경우
            if(n1>n3){        //n1 > n3의 경우      
                if(n2>n3)      //n2 > n3의 경우, 결국 n1>n2>n3
                    printf("%d %d %d", n1, n2, n3); 
                else   //n3 > n2의 경우, 결국 n1>n3>n2
                    printf("%d %d %d", n1, n3, n2);          
            }
            else   //n1>n2, n1<n3인 경우, 결국 n1>n3>n2
                printf("%d %d %d", n3, n1, n2);        
        }
        else if(n2>n3){  //n1<n2인 경우
            if(n1>n3)  //n2>n1>n3인 경우
                printf("%d %d %d", n2, n1, n3);            
            else 
                printf("%d %d %d", n2, n3, n1);   //출력 결과
        }
        else{     
         //n3이 제일 큰 수일 경우에 나머지 n1과 n2에 대한 판별식
            if(n1>n2)
                printf("%d %d %d",n3,n1,n2);
            else
                printf("%d %d %d",n3,n2,n1);
        }    
    }
  //2. 조건식에서 비교연산자와 논리연산자를 이용한 판별 방법
    if(n1 == n2 && n2 == n3){
    //n1, n2, n3이 도무 같을 때 출력
        printf("all same number");    
    }
    else if(n1>n2 && n1>n3){
        if(n2>n3) printf("%d %d %d", n1, n2, n3);
        else printf("%d %d %d", n1, n3, n2);
    }
    else if(n2>n1 && n2>n3){
        if(n1>n3) printf("%d %d %d", n2, n1, n3);
        else printf("%d %d %d", n2, n3, n1);
    }   //조건식이 참일때 실행하는 문장
    else{
        if(n1>n2) printf("%d %d %d", n3, n1, n2);
        else printf("%d %d %d", n3, n2, n1);
    }
}
