#include "stdio.h"
#include "stdlib.h"
#include "string.h"

long int stat = 0;

void rearrange(){
    if(stat < 0){
        stat = 0;
    }
    if(stat > 100){
        stat = 100;
    }
}

int hungry(){
    return stat < 100;
}

void eatHamburger(){
    if(hungry()){
        printf("Eat a hamburger!\n");
    } else{
        printf("I am not hungry!\n");
    }
}

int main(){
    eatHamburger();
    char c[100];
    while (true){
        printf("your hunger status(0-100), press \"esc\" to exit:");
        gets(c);
        if(!strcmp(c, "esc")){
            break;
        }
        if(strspn(c, "0123456789") != strlen(c)){
            printf("WRONG INPUT!\n");
            continue;
        }
        stat = atoi(c);
        rearrange();
        eatHamburger();
    }
    return 0;
}