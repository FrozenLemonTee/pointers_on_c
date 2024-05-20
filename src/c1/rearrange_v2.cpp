//1.6
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX_COLS 20
#define MAX_LINE_LENGTH 1000

int read_column_numbers(int columns[], int max);
void rearrange(char* output, const char* input, int n_columns, const int columns[]);

int main(void){
    char input[MAX_LINE_LENGTH], output[MAX_LINE_LENGTH];
    int columns[MAX_COLS];
    int n_columns = read_column_numbers(columns, MAX_COLS);
    while (gets(input) != NULL){
        printf("Original input: %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }
    return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max){
    int num = 0;
    int ch;
    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0){
        num += 1;
    }
    if (num % 2 == 1){
        columns[num] = MAX_LINE_LENGTH - 1; // 若列数数组元素不成对，最后补齐一个数值至上限值
    }
    while ((ch = getchar()) != EOF && ch != '\n');
    return num;
}

void rearrange(char* output, const char* input, int n_columns, const int columns[]){
    int output_col = 0;
    int len = strlen(input);
    for (int col = 0; col < n_columns; col += 2) {
        int n_chars = columns[col + 1] - columns[col] + 1;
        if (columns[col] >= len || output_col == MAX_LINE_LENGTH - 1){
            break;
        }
        if (output_col + n_chars > MAX_LINE_LENGTH - 1){
            n_chars = MAX_LINE_LENGTH - output_col - 1;
        }
        strncpy(output + output_col, input + columns[col], n_chars);
        output_col += n_chars;
    }
    output[output_col] = '\0';
}