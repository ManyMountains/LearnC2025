#include <stdio.h>

/*
（二）编写程序，打印出以下的杨辉三角形（要求打印出N行）。
1
1  1
1  2  1
1  3  3  1
1  4  6  4  1
1  5  10  10  5  1
……………………………
以下代码由AI生成
*/
int main(){
    int n;
    printf("请输入要打印的杨辉三角的行数（不超过20行）：");
    scanf("%d",&n);
    int arr[20][20];
    //初始化杨辉三角
    for(int i=0;i<n;i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    //计算杨辉三角的值
    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    //打印杨辉三角
    for(int i=0;i<n;i++){
        //打印前导空格
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}