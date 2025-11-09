#include <stdio.h>

/**
 * （五）在屏幕上显示九九乘法表
 * @author 张家懿
 */

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}