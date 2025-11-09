#include <stdio.h>
#include <stdlib.h>

/**
 * 输出如下效果：
 * 1  2  3  4  5   
 * 2  4  6  8  10
 * 3  6  9  12 15
 * 4  8  12 16 20
 */

int main(){
    for(int i = 1;i<=4;i++){
        for(int j=1;j<=5;j++){
            printf("%-4d",j*i);
        }
        printf("\n");
    }
    return 0;
}
