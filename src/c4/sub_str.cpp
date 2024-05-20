//4.6
#include "stdio.h"
#include "string.h"

#define BUF_MAX_SIZE 128

int substr(char dst[], char src[], int start, int len){
    int cnt = 0;
    int _start = start >= 0 ? start : 0;
    int _len = len >= 0 ? len : 0;
    for (int i = 0; i + _start < strlen(src)
                    && i + _start < BUF_MAX_SIZE - 1 && i < _len; ++i) {
        dst[i] = src[i + _start];
        cnt += 1;
    }
    dst[cnt] = '\0';
    return cnt;
}

int main(){
    char src[BUF_MAX_SIZE];
    printf("source string:");
    gets(src);
    printf("\n");
    printf("start:");
    int start;
    scanf("%d", &start);
    printf("\n");
    printf("len:");
    int len;
    scanf("%d", &len);
    printf("\n");
    char dst[BUF_MAX_SIZE];
    printf("target string:");
    substr(dst, src, start, len);
    printf("%s\n", dst);
    return 0;
}