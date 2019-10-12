#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct PERSON
{
  int age;
  char name[16];
} Person;

typedef struct DOG{
  int age;
  char name[16];
} Dog;

void show_dog(Dog *dog){
  printf("name=%s age=%d\n", dog->name, dog->age);
}

void show_person(Person *person){
  printf("name=%s age=%d\n", person->name, person->age);
}
void show_syain(Person person[], int length){
  int i;
  for(i = 0 ; i < length ; i++){
    show_person(&person[i]);
  }
}
int main()
{
  Person yamada;
  Dog pochi;
  Person syain[10];
  memset(&syain, 0x00, sizeof(syain));
  memset(&yamada, 0x00, sizeof(yamada));
  memset(&pochi, 0x00, sizeof(pochi));
  strcpy(syain[0].name, "SAKAI"); 
  strcpy(syain[1].name, "SUZUKI");
  strcpy(syain[2].name, "TAKAHASHI");

  yamada.age = 20;
  strcpy(yamada.name, "YAMADA");

  //printf("name=%s age=%d\n", yamada.name, yamada.age);
  show_person(&yamada);
  show_person(&syain[0]);
  show_syain(syain, 3);
  pochi.age = 5;
  strcpy(pochi.name, "POCHI");

  show_dog(&pochi);
}