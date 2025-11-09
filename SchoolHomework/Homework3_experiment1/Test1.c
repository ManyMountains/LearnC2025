#include <stdio.h>
#include <stdlib.h>

/**
 * （一）输入一个整数，判断它是否为偶数。
 * @author 张家懿
 */

int main() {
    //system("chcp 56001");
    int num;
    printf("请输入一个整数：");
    scanf("%d",&num);
    if(num%2==0){
        printf("这个数是一个偶数。\n");
    }else{
        printf("这个数是一个奇数。\n");
    }

}