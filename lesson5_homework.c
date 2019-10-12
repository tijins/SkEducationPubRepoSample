#include<stdio.h>

void two_times(int *aptr){
    *aptr = *aptr * 2;
}
void chg_size(char *mojiptr){
    int i;
    for(i = 0 ; mojiptr[i] != 0 ; i++)
    mojiptr[i] -= 32; 
}
void chg_size_s(char *mojiptr){
    int i;
    for(i = 0 ; i<3 ; i++){
        mojiptr[i] += 32;
    }
}
int main()
{
    int a = 100;
    char moji[4] = "abc";
    char s_moji[4] = "ABC";
    two_times(&a);
    printf("after two_times a=%d\n", a);
    chg_size(&moji[0]);
    printf("mojiを大文字にすると%s\n", moji);
    chg_size_s(&s_moji[0]);
    printf("s_mojiを小文字にすると%s\n", s_moji);
    return 0;
}