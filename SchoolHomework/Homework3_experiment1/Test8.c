#include <stdio.h>

/**
 * 输入四个整数，要求按由小到大顺序输出。
 * （在得到正确结果后，修改程序使之按由大到小顺序输出）
 */

int main(){
    int num1,num2,num3,num4,temp;
    printf("请输入4个整数，用空格分隔：\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if(num1>num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num1>num3){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num1>num4){
        temp = num1;
        num1 = num4;
        num4 = temp;
    }

    if(num2>num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if(num2>num4){
        temp = num2;
        num2 = num4;
        num4 = temp;
    }

    if(num3>num4){
        temp = num3;
        num3 = num4;
        num4 = temp;
    }

    printf("四个数从小到大排列为：%d %d %d %d\n",num1,num2,num3,num4);

    temp = num1;
    num1 = num4;
    num4 = temp;
    temp = num2;
    num2 = num3;
    num3 = temp;

    printf("四个数从大到小排列为：%d %d %d %d\n",num1,num2,num3,num4);
}
