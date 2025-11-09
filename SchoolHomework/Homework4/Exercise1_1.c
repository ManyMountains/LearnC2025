#include <stdio.h>

/**
 * 输入两个正整数m和n，求其最大公约数和最小公倍数
 * 记住一个公式：a*b=最小公倍数*最大公约数
 * 方法1：穷举法（从大到小除）
 * @author 张家懿
 */

int main(){
    int m, n, greatestCommonDivisor, leastCommonMultiple, minNum;
    printf("此程序求最大公约数和最小公倍数\n请输入两个正整数（用空格分隔）\n");
    scanf("%d %d",&m,&n);
    //方法1：从大到小除
    minNum = m>n?n:m;
    for(int i = minNum;i>0;--i){
        if((m%i==0)&&(n%i==0)){
            greatestCommonDivisor = i;
            break;
        }
    }
    leastCommonMultiple = m*n/greatestCommonDivisor;
    printf("最大公约数：%d\n最小公倍数：%d\n",greatestCommonDivisor,leastCommonMultiple);
    
}