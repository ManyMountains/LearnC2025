#include <stdio.h>

/**
 * （一）求从键盘输入的10个数中所有正数之和。
 * @author 张家懿
 */

int main(){
    int num,sum;
    sum = 0;
    for(int i = 1;i<=10;++i){
        printf("请输入第%d个数：",i);
        scanf_s("%d",&num);
        if(num>0){
            sum += num;
        }
    }
    printf("这10个数中正数的和是%d\n",sum);
}