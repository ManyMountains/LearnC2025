#include <stdio.h>

//（二）编写程序，打印出以下的杨辉三角形（要求打印出N行）。

int main(){
    //1. 定义n，输入数据
    int length;
    printf("请输入要打印的杨辉三角的行数（不超过20行）：");
    scanf("%d",&length);
    while(length>20||length<1){
        printf("输入不正确，请重新输入：");
        scanf("%d",&length);
    }
    //2. 计算杨辉三角，赋值数组
    //    int arr1[][3] = {{1,2,3},{1,2,3}}; 
    //    二维数组可以不指定外层数组的长度，但一定要给定每个内部数组的长度 
    int arr[20][20];
    for(int i = 0; i<length; i++){
        //2.1. 给杨辉三角最外层为1的位置赋值（外层数组中每个内层数组的首索引和末索引）
        arr[i][0] = 1;
        arr[i][i] = 1;
        //2.2. 计算杨辉三角内部的数据
        if(i>1){
            for(int j = 1; j<i; j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    //3. 打印输出
    for(int i = 0; i<length; i++){
        for(int j = 0; j<i+1; j++){
            printf("%-6d",arr[i][j]);
        }
        printf("\n");
    }
}