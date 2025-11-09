/**
 * C语言学习：测试常量的使用
 * @author 张家懿
 */

#include <stdio.h>
#define PRICE 30  //宏常量又称符号常量

int main(int argc, char const *argv[]){
    int num,total;
    num=10;
    total=num*PRICE;
    printf("total=%d",total);
    return 0;
}
