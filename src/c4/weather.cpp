#include "stdio.h"
#include "stdlib.h"

const char* const water[] = {"snowing", "raining"};
const char* const tem[] = {"cold", "warm"};

void weather(int precipitating, double temperature){
    if(precipitating){
        if(temperature < 32){
            printf("%s", water[0]);
        }else{
            printf("%s", water[1]);
        }
    } else{
        if(temperature < 60){
            printf("%s", tem[0]);
        }else{
            printf("%s", tem[1]);
        }
    }
}

int main(int argc, char* argv[]){
    weather(atoi(argv[argc - 2]), atoi(argv[argc - 1]));
    return 0;
}