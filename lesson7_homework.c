#include <stdio.h>

int main(){
    int num_1;
    int num_2;
    int result;
    char str[16];
while(1){
        printf("数字１を入力してください\n");
        scanf("%d", &num_1);
        printf("数字２を入力してください\n");
        scanf("%d", &num_2);
        printf("計算方法を入力してください(+,-,*,/)\n");
        scanf("%s", &str[0]);
        switch(str[0]){
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            result = num_1 / num_2;
            break;
        default:
            printf("入力された演算子が存在しません\n");
            continue;
        }
        break;
    }
    printf("%d %s %d = %d/n", num_1, str, num_2, result);

    return 0;

}