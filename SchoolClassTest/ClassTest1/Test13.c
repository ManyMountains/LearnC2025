#include <stdio.h>
#include <stdlib.h>

/**
 * 用三种循环结构计算1+2+3+...+100
 */

int main(){
    int num = 1;
    int sum = 0;
    while(num<=100){
        sum+=num;
        num++;
    }
    printf("%d\n",sum);

    num = 1;
    sum = 0;
    do{
        sum+=num;
        num++;
    }while(num<=100);
    printf("%d\n",sum);

    sum = 0;
    for(num = 1;num<=100;num++){
        sum+=num;
    }
    printf("%d\n",sum);
}
