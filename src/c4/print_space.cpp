#include "stdio.h"

void print_space(int num){
    for (int i = 0; i < num; ++i) {
        printf("\n");
    }
}

int main(){
    int num;
    scanf("%d", &num);
    print_space(num);
    return 0;
}