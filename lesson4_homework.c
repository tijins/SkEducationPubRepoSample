#include <stdio.h>
#include <string.h>

//関岡 不要な;があります
int main()
{
    int i = 32;
    char *str = "ABCDEFG";
    char *str1 = "ABC";
    char *str2 = "ABC";

    //関岡 ;（セミコロン）と:（コロン）が誤字になっています
    printf("i=%d\n", i);
    printf("i=%02x\n", i);
    printf("i=%p\n", i);

    printf("%s %d\n", str, strlen(str));

    //関岡 この方法では、文字列のアドレス（ポインタ）同時を比較しています。
    if(str1 == str2){
        printf("true\n");
    }else{
        printf("false\n");
    }

    return 0;
}
