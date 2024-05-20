//1.3
#include "stdio.h"

#define MAX_LEN 50

void checksum(signed char* s){
    signed char checksum = -1; // 每行所有字符（包括回车符）值之和
    int i = 0;
    while (s[i] != '\0'){
        checksum += s[i];
        i += 1;
    }
    printf("%s%d\n", s, checksum);
}

int main(){
    signed char s[MAX_LEN];
    signed char c;
    int i = 0;
    while ((c = getchar()) != EOF){
        s[i] = c;
        i += 1;
    }
    s[i] = '\0';
    checksum(s);
}