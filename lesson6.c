#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Person
{
  int age;
  char name[16];
};

typedef struct DOG{
  int age;
  char name[16];
} Dog;

void show_dog(Dog *dog){
  printf("name=%s age=%d\n", dog->name, dog->age);
}

int main()
{
  struct Person yamada;
  Dog pochi;

  memset(&yamada, 0x00, sizeof(yamada));
  memset(&pochi, 0x00, sizeof(pochi));

  yamada.age = 20;
  strcpy(yamada.name, "YAMADA");

  printf("name=%s age=%d\n", yamada.name, yamada.age);

  pochi.age = 5;
  strcpy(pochi.name, "POCHI");

  show_dog(&pochi);
}