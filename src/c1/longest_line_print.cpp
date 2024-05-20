//1.4
#include "stdio.h"
#include "string.h"

#define MAX_LEN 50

//void line_print(){
//    char res[MAX_LEN], tmp[MAX_LEN];
//    res[0] = '\0';
//    int max_cnt = 0;
//    scanf("%s\n", tmp);
//    char c = getchar();
//    while (c != EOF){
//        if(strlen(tmp) > max_cnt){
//            strcpy(res, tmp);
//        }
//        scanf("%s\n", tmp);
//        c = getchar();
//    }
//}
//
//int main(){
//    line_print();
//    return 0;
//}

// 参考答案版
void line_print(){
    char res[MAX_LEN], tmp[MAX_LEN]; // res存储要输出的最长行，tmp接收每行字符
    res[0] = '\0'; // 初始化res
    int max_cnt = 0; // 当前找到的最长行长度
    while ((gets(tmp)) != NULL){
        int cnt = strlen(tmp);
        if (cnt > max_cnt){
            max_cnt = cnt;
            strcpy(res, tmp);
        }
    }
    printf("%s\n", res);
}

int main(){
    line_print();
    return 0;
}