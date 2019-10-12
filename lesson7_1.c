#include <stdio.h>

void main(int argc, char *argv[]){
  int i;
  int inputNum;
  char inputStr[16];

  //コマンドラインからの入力
  for(i=0; i<argc; i++){
    printf("%d %s\n", i, argv[i]);
  }
  printf("\n\n");

  //scanfで入力(int型の入力)
  printf("Please inputNum a number ?>");
  scanf("%d", &inputNum);
  printf("inputNum = %d\n", inputNum);

  //scanfで入力(文字列の入力)
  printf("Please inputNum a string ?>");
  scanf("%s", &inputStr);
  printf("inputStr = %s\n", inputStr);

  //複数の型を同時に入力する
  printf("Please inputNum a NAME age ?>");
  scanf("%s %d", &inputStr, &inputNum);
  printf("name(age) = %s(%d)\n", inputStr, inputNum);

}