/**
 * 测试不同进制的整数型变量
 * 测试变量
 * @author 张家懿
 */

#include <stdio.h>

int main(int argc, char const *argv[]){
    int num1 = 0b101101;//二进制整数
    int num2 = 03212;//八进制整数
    int num3 = 563;//十进制整数
    int num4 = 0x3b4a;//十六进制整数
    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    printf("%d\n",num4);

    int i = 100;
    int i2 = 1e8;
    float f1 = 12.4;
    float f2 = 12.45f;
    float f3 = 12.123456789;
    double d1 = 12.3456;
    double d2 = 12.123456789;
    printf("%d, %d\n",i,i2);
    printf("%f, %f, %.9f\n",f1,f2,f3);//%f默认精确到小数点后6位
    printf("%lf, %.9f,%.9lf\n",d1,d2,d2);//此行代码比较%f和%lf的区别：好像也没啥区别呵呵呵
    
    char c1 = 'A';

    
    return 0;
}
