#include <stdio.h>
#include <string.h>

void main(){
    char buffer[256], *pch;
    int n;
    int alphabet[26] = {0};
    FILE *fp = fopen("malloc.txt", "r");
    while (fgets(buffer, 255, fp) != NULL){
        pch = buffer;
        while(*pch != NULL){
            if(*pch >= 'A' && *pch <= 'Z')
                alphabet[*pch - 'A']++;
            else if(*pch >= 'a' && *pch <= 'z')
                alphabet[*pch - 'a']++;
            putchar(*pch);
            pch++;
        }
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