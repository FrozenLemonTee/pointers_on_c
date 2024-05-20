//4.7
#include "stdio.h"

#define BUF_MAX_SIZE 128

void deblank(char string[]){
    int dst = 0;
    int src = 0;
    while (string[src] != '\0'){
        if(string[src] == ' ' || string[src] == '\t' || string[src] == '\n'){
            string[dst] = string[src];
            dst += 1;
            int prob = src + 1;
            while (string[src] == string[prob] && string[prob] != '\0'){
                prob += 1;
            }
            src = prob;
        }
        string[dst] = string[src];
        dst += 1;
        src += 1;
    }
    string[dst] = '\0';
}


int main(){
    char string[BUF_MAX_SIZE];
    printf("source string:");
    gets(string);
    deblank(string);
    printf("%s\n", string);
    return 0;
}