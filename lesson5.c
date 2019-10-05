#include<stdio.h>

void test_func(int count, int a)
{
  a = a + 1;
  printf("test_func a = %d (%p)\n", a, &a);
  
  if(count < 3){
    test_func(count + 1, a);
  }
}

void test_func_pointer(int count, int *a)
{
  *a = *a + 1;
  printf("test_func_pinter a = %d (%p)\n", *a, a);
  
  if(count < 3){
    test_func_pointer(count + 1, a);
  }
}

int plus(int a, int b){
  return a + b;
}

void plus_minus_ret(int a, int b, int *plus, int *minus){
  *plus  = a + b;
  *minus = a - b;
}

int main()
{
  int a = 100;

  printf("main a = %d (%p)\n", a, &a);

  test_func(0, a);
  printf("after test_func a=%d\n\n", a);

  test_func_pointer(0, &a);
  printf("after test_func_pointer a=%d\n\n", a);

  return 0;
}
