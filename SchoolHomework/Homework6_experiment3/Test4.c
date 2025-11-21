#include <stdio.h>

//（四）编写一个程序，不用strcpy函数，将字符串s1拷贝到s2中去。

int main(){
    char string1[100];
    char string2[100];
    printf("请输入文本：\n");
    gets_s(string1,100);
    for(int i = 0;i<100;i++){
        string2[i] = string1[i];
        if(string1[i] == 0){
            break;
        }
    }
    printf("拷贝后的文本：\n");
    puts(string2);
    return 0;
}