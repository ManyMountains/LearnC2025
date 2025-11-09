/**
 * 测试分支结构的使用1：if结构的使用
 * @author 张家懿
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char  ch;
    ch=getchar( );
    if(ch>='a' && ch<='z')
        ch -= 32;
    putchar(ch);
    return 0;
}
