#include "stdio.h"

const char* const answers[] =
        {"who", "what", "when",
         "where", "why", "don\'t know"};

void answer(int whichWord){
    int p =
            (whichWord >= 1) && (whichWord <= 5) ?
            whichWord - 1 : 5;
    printf("%s\n", answers[p]);
}

int main(){
    int whichWord;
    scanf("%d", &whichWord);
    answer(whichWord);
    return 0;
}