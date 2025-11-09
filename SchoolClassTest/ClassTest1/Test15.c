#include <stdio.h>
#include <stdlib.h>

/**
 * 输出100-200范围内不能被3整除的整数
 * @author 张家懿
 */

int main(){
    for(int i = 100;i<=200;i++){
        if(i%3==0) continue;
        printf("%-6d",i);
    }
    printf("\n");
    return 0;
}
