#include <stdio.h>

/**
 * （三）输入四个整数，输出其中的最大数和最小数。
 * @author 张家懿
 */

int main(){
    int num1,num2,num3,num4,minNum,maxNum;
    printf("请输入4个整数，用空格分隔：\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    minNum=num1;
    maxNum=num1;
    if(num2>maxNum) maxNum=num2;
    if(num3>maxNum) maxNum=num3;
    if(num4>maxNum) maxNum=num4;
    if(num2<minNum) minNum=num2;
    if(num3<minNum) minNum=num3;
    if(num4<minNum) minNum=num4;
    printf("最大值：%d\n最小值：%d\n",maxNum,minNum);
    return 0;
}