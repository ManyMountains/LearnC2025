#include <stdio.h>
#include <stdlib.h>

int main(){

    int m,n,minNum,greatestCommonDivisor;
    scanf("%d %d",&m,&n);
    minNum = m<n?m:n;
    if(minNum==0) printf("不能除以0\n");return 0;
    for(int i=minNum;i>0;--i){
        if((m%i==0)&&(n%i==0)){
            greatestCommonDivisor = i;
            break;
        }
    }
    printf("最大公约数是：%d",greatestCommonDivisor);
    return 0;
}
