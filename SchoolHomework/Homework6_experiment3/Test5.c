#include <stdio.h>

//（五）编写一个程序，不用strcat函数，将字符串s2连接到s1后面。

int main(){
    char s1[200],s2[100];
    printf("请输入字符串1的文本：");
    gets_s(s1,100);
    printf("请输入字符串2的文本：");
    gets_s(s2,100);
    //判断字符串s1在哪里结束
    int endIndex = 0;
    for(int i = 0; i<100; i++){
        if(s1[i] == 0){
            endIndex = i;
            break;
        }
    }
    //将s2的内容复制到s1字符串的后面
    for(int i = 0; i<100; i++){
        int location = endIndex + i;
        s1[location] = s2[i];
        if(s2[i]==0){
            break;
        }
    }
    puts(s1);
    return 0;
}