#include <stdio.h>

/**
 * （六）输入一个字符，如果是数字字符，则转换成对应的数字。
 */

int main(){
    char num;
    scanf("%c",&num);
    printf("%d\n",num - '0');
}