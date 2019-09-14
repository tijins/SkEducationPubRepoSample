#include <stdio.h>

int plus(int a, int b){
  return a+b;
}

int main()
{  
  printf("Hello World\n");

  int c = plus(1, 2);
  printf("c=%d\n", c);

  return 0;
}
