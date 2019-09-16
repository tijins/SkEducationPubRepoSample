#include <stdio.h>

int multi(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main()
{
    int c = multi(5,2);
    printf("c=%d\n",c);

    int e = div(10,2);
    printf("e=%d\n",e);
    
    return 0;
}