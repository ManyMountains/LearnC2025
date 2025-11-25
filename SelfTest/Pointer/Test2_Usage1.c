#include <stdio.h>

//测试C语言指针在操作其他函数中的变量的作用

void swap(int* num1, int* num2);

int main(){
    //例子：定义一个新的函数，在函数中交换main函数中的两个数
    int a = 12, b = 43;
    printf("交换前：%d, %d\n",a,b);
    swap(&a, &b);
    printf("交换后：%d, %d\n",a,b);
}

void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

