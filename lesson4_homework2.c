//関岡 #がありませんでした
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//関岡 不要な;があります
int main()
{
    int i=100;
    char *str = "100";
    char *str1 = "ABC";
    char *str2 = "ABC";

    if(str1 == str2){
        printf("true\n");
    }else{
        printf("false\n");
    }
    
    //関岡 ;を忘れています
    i = atoi(str);
    //関岡 数値と文字列のアドレス（ポインタ）を比較しています（コンパイル時にwarningになっています）
    if(i == str){
        printf("true\n");
    }else{
        printf("false\n");
    }
    return 0;
}
