/**
 * 输入函数的使用scanf
 * @author 张家懿
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
    /*
    输入：getchar（）；
    输出：putchar（）*/
    char ch1,ch2='\n';
    printf("请输入一个字符：");
    ch1=getchar();
    putchar(ch1);
    putchar(ch2);
    putchar('a');
    
    return 0;
 }
 