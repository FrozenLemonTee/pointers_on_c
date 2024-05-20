//4.5
#include "stdio.h"
#include "string.h"

#define BUF_MAX_SIZE 128

void print_redundant(char* inputBuf, char* cmpBuf, int cnt){
    if(cnt == 1 || strcmp(inputBuf, cmpBuf)){
        strcpy(cmpBuf, inputBuf);
    } else{
        printf("%s\n", inputBuf);
    }
}

int main(){
    int cnt = 0; // 行数计数器
    char inputBuf[BUF_MAX_SIZE], cmpBuf[BUF_MAX_SIZE];
    while ((gets(inputBuf)) != NULL){
        cnt += 1;
        print_redundant(inputBuf, cmpBuf, cnt);
    }
    return 0;
}