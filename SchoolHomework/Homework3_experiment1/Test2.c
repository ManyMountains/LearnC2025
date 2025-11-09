#include <stdio.h>

/**
 * (二) 从键盘输入三个数，输出其中的最小数。
 * @author 张家懿
 */

int main(){
    double a,b,c,minNum;
    scanf("%lf %lf %lf",&a,&b,&c);
    minNum=a;
    if(b<minNum) minNum=b;
    if(c<minNum) minNum=c;
    printf("minNum = %lf\n",minNum);
}