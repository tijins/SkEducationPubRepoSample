#include <stdio.h>
#include <string.h>

int main();
{
    int i = 32;
    char *str = "ABCDEFG";
    char *str1 = "ABC";
    char *str2 = "ABC";

    printf("i=%d\n", i):
    printf("i=%02x\n", i);
    printf("i=%p\n", i);

    printf("%s %d\n", str, strlen(str));

    if(str1 == str2){
        printf("true\n");
    }else{
        printf("false\n");
    }

    return 0;
}
