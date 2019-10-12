#include <stdio.h>

struct User
{
  char name[16];
  int  age;
};


//ポインタの復習
void main(int argc, char *argv[]){
  int  int_array[3] = {0, 1, 2};
  int  *pIntArray = int_array;

  char char_array[4] = {'A', 'B', 'C', '\0'};
  //下記と同じ意味です
  //char *char_array = "ABC";
  char *pCharArray = char_array;

  struct User users[3]=
    {
      {"YAMADA", 10},
      {"tanaKA", 20},
    };
  struct User *pUser = users;
  

  printf("int %d(%p)\n", *int_array, int_array);
  printf("int %d(%p)\n", int_array[0], &int_array[0]);
  printf("int %d(%p)\n", int_array[1], &int_array[1]);
  printf("\n");

  printf("int* %d(%p)\n", *pIntArray, pIntArray);
  pIntArray = pIntArray + 1;
  printf("int* %d(%p)\n", *pIntArray, pIntArray);
  pIntArray = pIntArray + 1;
  printf("int* %d(%p)\n", *pIntArray, pIntArray);
  printf("\n");

  printf("char %s (%p)\n", char_array, char_array);
  printf("char %s (%p)\n", &char_array[0], &char_array[0]);
  printf("char %s (%p)\n", &char_array[1], &char_array[1]);
  printf("char %s (%p)\n", &char_array[2], &char_array[2]);
  printf("\n");

  printf("char* %s(%p)\n", pCharArray, pCharArray);
  pCharArray++;
  printf("char* %s(%p)\n", pCharArray, pCharArray);
  pCharArray++;
  printf("char* %s(%p)\n", pCharArray, pCharArray);
  printf("\n");

  printf("user %s,%d (%p)\n", users[0].name, users[0].age, &users[0]);
  printf("user %s,%d (%p)\n", users[1].name, users[1].age, &users[1]);
  printf("\n");

  printf("user* %s,%d (%p)\n", pUser->name, pUser->age, pUser);
  pUser++;
  printf("user* %s,%d (%p)\n", pUser->name, pUser->age, pUser);
  pUser++;

}