#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LIST
{
    char   c_name[20];//親の名前
    char   p_name[20];//子の名前
    int    age;//年齢
    float  height;//身長
    int    phone;//電話番号
} List;

void show_list(List *childptr){
    int i = 0;
    for(i = 0 ; i<3 ; i++){
    printf("名前:%s\n 年齢:%d\n 身長:%05.1f\n 保護者:%s\n 電話番号:%011d\n", 
            childptr[i].c_name, childptr[i].age, childptr[i].height, childptr[i].p_name, childptr[i].phone);
    }
}

int main(){
    List child[3];
    memset(&child, 0x00, sizeof(child));
    strcpy(child[0].c_name, "山田(子)");
    strcpy(child[1].c_name, "田中(子)");
    strcpy(child[2].c_name, "鈴木(子)");
    strcpy(child[0].p_name, "山田(親)");
    strcpy(child[1].p_name, "田中(親)");
    strcpy(child[2].p_name, "鈴木(親)");
    child[0].age = 1;
    child[1].age = 2;
    child[2].age = 3;
    child[0].height = 80.5;
    child[1].height = 95.5;
    child[2].height = 105.1;
    child[0].phone = 010;
    child[1].phone = 0x10;
    child[2].phone = 120003003;
    show_list(&child[0]);
    return 0;
}