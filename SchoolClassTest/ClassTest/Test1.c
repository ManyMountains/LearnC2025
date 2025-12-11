#include <stdio.h>

int getMax(int a, int b){
    return a>b?a:b;
}

//用函数指针变量调用函数，比较两个数的大小

int main(){
    int getMax(int a, int b);
    int (* p)() = getMax;
    int num1 = 3;
    int num2 = 4;
    int maxNum = p(num1, num2);
    printf("%d",maxNum);
}