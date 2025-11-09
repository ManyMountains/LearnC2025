/**
 * 从键盘输入一个三位数，分别打印个十百位
 * @author 张家懿
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    printf("个位：%d\n十位：%d\n百位：%d\n",num%10,num/10%10,num/100/*%10*/);
    return 0;
}
