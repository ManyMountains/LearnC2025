#include "stdio.h"

//（六）在数组中查找指定的数，若存在，则输出其在数组中的序号。

int main(){
    int arr[10];
    printf("请输入10个数，以空格分隔：\n");
    for (int i = 0; i<10; i++) {
        scanf("%d",&arr[i]);
    }

    int goal,isExist=0;
    printf("请输入要查找的数：");
    scanf("%d",&goal);
    for(int i = 0; i<10; i++){
        if(arr[i]==goal){
            printf("%d\n",i);
            isExist = 1;
            break;
        }
    }
    if(!isExist){
        printf("不存在该数\n");
    }
    return 0;
}