#include <stdio.h>
#include <string.h>

int main(){
    char dept[20], name[20];
    int grade, year;

    printf("정보를 입력하세요.\n\n");
    printf("학과: ");
    scanf("%s", dept);
    printf("학년: ");
    scanf("%d", &grade);
    printf("입학년도: ");
    scanf("%d", &year);
    printf("이름: ");
    scanf("%s", name);

    printf("\n나는 %s %d학년 %d학번 %s입니다.", dept, grade, year, name);
    return 0;
}