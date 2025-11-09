/**
 * 从键盘输入BOY三个字符，然后把它们输出到屏幕上。
 * @author 张家懿
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[3];

    for(int i = 0;i<3;i++){
        str[i] = getchar();
    }

    for(int i = 0;i<3;i++){
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
