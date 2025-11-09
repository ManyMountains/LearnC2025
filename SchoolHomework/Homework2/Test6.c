#include <stdio.h>

/**
 * 给一个不多于五位的正整数，要求：
 * （1）求出它是几位数；
 * （2）分别输出每一位数字；
 * （3）按逆序输出每一位数字。
 * 
 * 晕啊晕
 * 
 * @author 张家懿
 */

#include <stdio.h>

int main(){
    //1. 定义和输入数字
    int num;
    printf("请输入一个不多于五位的正整数：");
    scanf("%d",&num);

    //2. 判断这个数是几位数数，同时输出每一位的数字
    int n = num;
    int count = 0;
    printf("该数字的每一位数字：\n");
    while(n!=0){//此循环通过判断除10的次数来看这个数是几位数
        printf("%d\n",n%10);//输出每一位数字
        n/=10;
        ++count;
    }
    printf("这个数是%d位数\n",count);

    //3. 倒着输出数字（用数组会更方便）
    int n2 = num;
    printf("逆序：");
    for(int i=1;i<=count;++i){
        printf("%d",n2%10);
        n2/=10;
    }
    printf("\n");

    return 0;
}
