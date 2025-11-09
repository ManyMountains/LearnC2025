/**
 * 运算符
 * @author 张家懿
 */

#include <stdio.h>

int main(){
    //1. 算术运算符
    printf("%d\n",12+3);//加法运算符
    printf("%d\n",12-3);//减法运算符
    printf("%d\n",12*3);//乘法运算符
    printf("%d\n",12/3);//除法运算符
    int num1 = 12;
    num1++;//自增,自减运算符
    printf("num1 = %d\n",num1++);//13
    printf("num1 = %d\n",num1++);//14
    printf("num1 = %d\n",--num1);//12
    
    printf("--------------\n");
    //2. 赋值运算符
    int num2 = 23;//=就是赋值运算符
    num2 += 2;
    printf("num2 = %d\n",num2);

    //以下是拓展赋值运算符
    int num3 = 12;
    num3 += num3 -= num3 * num3;
    //num3=-624，等价于num3=num3+(num3=num3-(num3*num3))
    //他妈的为什么要弄这种例子啊！在公司里这样写代码是会被同事打死的！ 
    printf("num3 = %d\n",num3);

    int num4 = 2;
    num4 %= 4-1;//相当于num4=num4%(4-1)
    num4+=num4*=num4-=num4*=3;//num4=0
    printf("num4 = %d\n",num4);  

    printf("------------\n");

    //3. 关系运算符（比较运算符）
    printf("%d\n",4>2);//1
    printf("%d\n",4<2);//0
    printf("%d\n",4==2);//0
    printf("%d\n",4!=2);//1

    printf("------------\n");

    //4. 逻辑运算符
    printf("%d\n",4>2&4<2);//0
    printf("%d\n",4>2&8>2);//1
    printf("%d\n",4>2|8<2);//1
    printf("%d\n",4<2|3<0);//0

    printf("%d\n",4>2&&4<2);//0
    printf("%d\n",4>2&&8>2);//1
    printf("%d\n",4>2||8<2);//1
    printf("%d\n",4<2||3<0);//0

    printf("%d\n",!0);//1

    printf("------------\n");

    //5. 条件运算符（三目运算符）
    int x = 0;
    printf("%d\n",x>0?1:(x<0?-1:0));

    printf("------------\n");

    //6. 位运算符
    //略。。。
}
