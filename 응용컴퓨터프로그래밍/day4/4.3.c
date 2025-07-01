#include <stdio.h>
#include <string.h>

void main(){
    char ch;
    int alphabet[26] = {0};
    FILE *fp = fopen("malloc.txt", "r");
    while (!feof(fp)){
        ch = fgetc(fp);
        if(ch >= 'A' && ch <= 'Z')
            alphabet[ch - 'A']++;
        else if(ch >= 'a' && ch <= 'z')
            alphabet[ch - 'a']++;
        putchar(ch);
    }
    fclose(fp);

    printf("\n");
    for(int n = 0; n < 26; n++){
        printf(" %c : %2d  ", 65+n, alphabet[n]);
        for(int i = 0; i < alphabet[n]; i++){
            printf("*");
        }
        printf("\n");
    }
}