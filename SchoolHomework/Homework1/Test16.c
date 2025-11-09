/**
 * 测试switch分支语句的使用
 * @author 张家懿
 */

#include <stdio.h>

int main() {
    int x=1,y=0,a=0,b=0;
    switch(x){
        case 1:
            switch(y){//switch嵌套语句
                case 0: a++; break;
                case 1: b++; break;
            }
        case 2: a++; b++; break;
        case 3: a++; b++;
    }
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
