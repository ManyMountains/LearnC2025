#include <stdio.h>
#include <stdlib.h>

/**
 * 使用循环和变量实现斐波那契数列1
 */

int main(){
    int f1,f2,f3;
    scanf("%d %d",&f1,&f2);
    printf("%d\n%d\n",f1,f2);
    for(int i = 1;i<=38;i++){
        f3 = f1 + f2;
        printf("%d\n",f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}
