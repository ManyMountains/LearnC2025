/**
 * 2025/10/17
 * 输出字符串的几种方式
 * @author 张家懿
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20] = "Hello, world!";

    //方式1：
    printf("%s",str);
    printf("\n");

    //方式2：
    for(int i = 0;i<13;i++){
        printf("%c",str[i]);
    }
    printf("\n");

    //方式3：
    for(int i = 0;i<13;i++){
        putchar(str[i]);
    }
    printf("\n");

    //方式4：
    puts(str);

    return 0;
}
