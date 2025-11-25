#include <stdio.h>

int main(){
    //用指针获取变量中的数据
    int num1 = 28;
    double num2 = 33.2;
    int* a1 = &num1;
    double* a2 = &num2;
    
    printf("*a1 = num1 = %d\n",*a1);
    *a1 = 128;
    printf("*a1 = %d, num1 = %d\n",*a1,num1);

    printf("*a2 = num2 = %lf\n",*a2);
    *a2 = 13.4;
    printf("*a2 = %lf\n",*a2);

    printf("指针类型占用的字节数：%zu",sizeof(*a2));
}