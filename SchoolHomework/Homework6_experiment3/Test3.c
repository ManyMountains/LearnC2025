#include "stdio.h"

//（三）编写一个程序，将一个数组中的值按逆序重新存放。

int main(){
    //输入数组长度数据
    int length;
    scanf("%d",&length);
    //向数组中输入数据
    int arr[100];
    for(int i = 0; i<length; i++){
        scanf("%d",&arr[i]);
    }
    //数组翻转
    for(int i = 0; i<length/2; i++){
        int temp = arr[i];
        arr[i] = arr[length-1-i];
        arr[length-1-i] = temp;
    }
    //输出翻转后的数组
    for(int i = 0; i<length; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}