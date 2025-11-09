#include <stdio.h>

/*
 * 【例4.5】
 * 有一阶跃函数：
 * y = -1 (x<0)
 *     0  (x=0)
 *     1  (x>0)
 * 编写一个程序，输入一个x值，要求输出相应的y值
 */

int main(){
    int x,y;
    printf("请输入x的值：");
    scanf("%d", &x);
    if(x<0){
        y=-1;
    } else if (x==0){
        y=0;
    } else {
        y=1;
    }
    printf("x=%d, y=%d\n",x,y);
}