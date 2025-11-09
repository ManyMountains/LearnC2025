#include <stdio.h>

void getSum();
void getMaxNum();

int main(){
    int menuChioce = 0;
    printf("欢迎使用简易计算器！\n");
    printf("----------------\n");
    printf("操作菜单：\n");
    printf("1. 求和；  2. 求最大值；\n9. 退出。\n更多功能敬请期待……\n");
    scanf("%d",&menuChioce);
    switch(menuChioce){
        case 1 :
            getSum();
            break;
        case 2 :
            getMaxNum();
            break;
        case 9 : break;  
    }
    return 0;
}

void getSum(){
    int num1,num2;
    printf("请输入第1个数：");
    scanf("%d",&num1);
    printf("请输入第2个数：");
    scanf("%d",&num2);
    printf("%d + %d = %d \n",num1,num2,num1+num2);
}

void getMaxNum(){

}
