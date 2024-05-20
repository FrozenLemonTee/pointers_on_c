#include "stdio.h"

const char* const stat[] = {"WRONG", "RIGHT"};

void print_stat(double x, double y, double a, double b){
    printf("%s\n", stat[!(x < y || a >= b)]);
}

int main(){
    double nums[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%lf", &nums[i]);
    }
    print_stat(nums[0], nums[1], nums[2], nums[3]);
    return 0;
}