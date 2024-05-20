//4.2
#include "stdio.h"

int is_prime(int num){
    int left = 2;
    int right = num;
    while (left < right){
        if(num % left){
            right = num / left;
        } else{
            return 0;
        }
        left += 1;
    }
    return num > 1;
}

int main(){
    for (int i = -100; i < 101; ++i) {
        if(is_prime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}