#include <stdio.h>

//（一）用冒泡法对N个整数进行由小到大排序。

int main(){
    //定义n
    int n;
    printf("请输入整数的个数（不超过100个）：");
    scanf("%d",&n);
    while(n>100||n<1){
        printf("输入不正确，请重新输入：\n");
        scanf_s("%d",&n);
    }
    //定义数组和输入数据
    int arr[100];
    printf("请输入%d个整数，用空格或回车分隔：\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //冒泡排序
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    //输出排序后的数组
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}