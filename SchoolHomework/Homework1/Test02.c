/**
 * 测试const常量的使用
 * @author 张家懿
 */ 

#include  <stdio.h>
#define  PI  3.14159 //符号常量是预处理命令
#define  R  5.3

int main(int argc, char const *argv[]){
	printf("PI*R*R = %f\n", PI * R * R);
	printf("2*PI*R = %f\n", 2 * PI * R);
    const float pi = 3.1425926;//const常量
    //只能在初始化时赋值，后续不能再更改其值。
    return 0;
}
