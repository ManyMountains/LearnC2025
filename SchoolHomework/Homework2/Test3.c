#include <stdio.h>

/**
 * 【例4.7】
 * 用switch语句处理菜单命令。
 * 从键盘输入一个'A'或'a'字符，就会执行A操作，输入一个B或b字符，就会执行B操作
 */

void actionA(){
    printf("正在执行操作A……\n");
}

void actionB(){
    printf("正在执行操作B……\n");
}

int main(){
    char menuChioce;
    printf("请输入操作项目：");
    menuChioce = getchar();
    switch(menuChioce){
        case 'a' :
        case 'A' : actionA();break;
        case 'b' :
        case 'B' : actionB();break;
        default: printf("菜单项不正确。\n");  
    }
    return 0;
}