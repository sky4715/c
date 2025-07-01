#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXWORD 1000

void intialize();
void read_file();
void convert_lower(char *str);
int linear_search(char *key, int *found);
void move_downward(int index);
void insert_data(int index, char *str);
void print_words();
void deallocate();

struct WORDCOUNT{
    char *str;
    int count;
};

struct WORDCOUNT *words;
int nword;

int main(){
    intialize();
    read_file();
    print_words();
    deallocate();
}

void intialize(){
    words = (struct WORDCOUNT *)malloc(sizeof(struct WORDCOUNT)*MAXWORD);
    memset(words, 0, sizeof(struct WORDCOUNT)*MAXWORD);
    nword = 0; 
}

void read_file(){
    int found, index;
    char buffer[256];
    char *token;
    FILE *fp = fopen("programming.txt", "r");
    while (fgets(buffer, 255, fp) != NULL) {
        token = strtok(buffer, " ,.-");
        while(token != NULL){
            convert_lower(token);
            index = linear_search(token, &found);
            if(found == 1)
                words[index].count += 1;
            else{
                move_downward(index);
                insert_data(index, token);
            }
            token = strtok(NULL, " ,.-");
        }
    }
    fclose(fp);
}

void convert_lower(char *str){
    while(*str != NULL){
        *str = tolower(*str);
        str++;
    }
}

int linear_search(char *key, int *found){
    int n, compare;
    *found = 0;
    for (n=0; n<nword; n++){
        compare = strcmp(key, words[n].str);
        if (compare == 0){
            *found = 1;
            break;
        }
        if (compare < 0){
            break;
        }
    }
    return n; 
}

void move_downward(int index){
    int n;
    if (nword < MAXWORD-1){
        for (n=nword; n>=index; n--){
            words[n+1].str = words[n].str;
            words[n+1].count = words[n].count;
        }
    }
}

void insert_data(int index, char *str){
    int size;
    if (nword < MAXWORD-1){
        size = strlen(str) + 1;
        words[index].str = (char *)malloc(size);
        strcpy(words[index].str, str);
        words[index].count = 1;
        nword += 1;
    }
}

void print_words(){
    int n;
    for (n=0; n<nword; n++)
    printf("%3d. %-18s: %d\n", n+1, words[n].str, words[n].count);
}

void deallocate(){
    int n;
    for (n=0; n<nword; n++)
    if (words[n].str != NULL)
        free(words[n].str);
    
    free(words);
}