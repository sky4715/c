#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXWORD 100
#define MAXLENGTH 100

void get_words();
void sort_string();
void print_words();
void deallocate();

char *pstrarray[MAXWORD];
int nword;
void main(){
    get_words();
    sort_string();
    print_words();
    deallocate();
}

void get_words(){
    char buffer[MAXLENGTH], *temp;
    int size;

    nword = 0;
    printf("단어를 입력하세요. 최대 단어 수는 100 개 입니다.\n");
    printf("입력을 중지하려면 엔터를 입력하세요.\n\n");
    while(nword < MAXWORD){
        printf("%d. 단어 입력: ", nword + 1);
        gets(buffer);
        if(strcmp(buffer, "") == 0)
            break;
        else{
            size = strlen(buffer) + 1;
            temp = (char *)malloc(size);
            strcpy(temp, buffer);
            pstrarray[nword++] = temp;
        }
    }

}

void sort_string(){
    int n, m, minindex;
    char *temp;
    for (n=0; n<nword-1; n++){
        minindex = n;
        for (m=n; m<nword; m++)
            if (strcmp(pstrarray[minindex], pstrarray[m]) > 0)
                minindex = m;
        temp = pstrarray[minindex];
        pstrarray[minindex] = pstrarray[n];
        pstrarray[n] = temp;
    }
}

void print_words(){
    int n;
    printf("\n정렬 후 출력: 단어 수=%d\n", nword);
    for (n=0; n<nword; n++)
        puts(pstrarray[n]);
}

void deallocate(){
    int n;
    for (n=0; n<nword; n++)
        if (pstrarray[n] != NULL)
            free(pstrarray[n]);
}