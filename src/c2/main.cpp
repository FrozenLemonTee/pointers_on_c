//2.1
#include "stdio.h"
#include "stdlib.h"
#include "increment.cpp"
#include "negate.cpp"

int main(int argc, char* argv[]){
    int arg = atoi(argv[argc - 1]);
    printf("%d %d\n", increment(arg), negate(arg));
    return 0;
}