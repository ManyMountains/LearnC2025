#include <stdio.h>

/**
 * 有一个分段函数：
 * y = x^2   (x<1)
 *     2x-1  (1<=x<10)
 *     3x-11 (x>=10)
 * 写一个程序，输入x的值，输出y值
 * 
 * @author 张家懿
 */

int main(){
    int x;
    scanf("%d",&x);
    if(x<1){
        printf("%d\n",x*x);
    }else if(x>=1 && x<10){
        printf("%d\n",2*x-1);
    }else if(x>=10){
        printf("%d\n",3*x-11);
    }
}