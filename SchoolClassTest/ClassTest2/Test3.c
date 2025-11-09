#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * 判断某个数是不是质数
 * @author 张家懿
 */

int main(){
    int num,isPrime = 0;
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            printf("这个数不是一个质数。");
            return 0;
        }
    }
    printf("这个数是一个质数。\n");
    return 0;
}
