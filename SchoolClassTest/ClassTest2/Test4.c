#include <stdio.h>
#include <stdlib.h>

int main(){
    //定义变量，存储当前数是否是质数
    int isPrime = 1;
    //外层循环遍历3-100的数
    for(int i = 3;i<=100;/*i++*/i+=2){
        //内层循环判断当前数是否是质数
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0) {
                isPrime = 0;
                break;
            }
        }

        /*也可以不使用变量存储，
        如果数字是质数，应该会把循环完全执行完，此时j一定大于i的平方根
        if(j>sqrt(i)) printf("%-4d",i);
        */
        if(isPrime!=0) printf("%-4d",i);

        isPrime = 1;
    }

    return 0;
}
