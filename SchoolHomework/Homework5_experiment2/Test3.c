#include <stdio.h>
#include <math.h>

/**
 * 输入一个大于3的整数n，判定它是否prime质数。
 */

int main(){
    //int isPrime = 1;
    int num;
    scanf_s("%d",&num);
    for(int i = 2;i<sqrt(num);i++){
        if(num%i==0){
            //isPrime = 0;
            printf("这个数不是质数。\n");
            return 0;
        }
    }
    printf("这个数是质数\n");
    return 0;
}