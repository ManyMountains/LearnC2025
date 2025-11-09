#include <stdio.h>

/**
 * @author 张家懿
 */

int main(){
    int score;
    printf("请输入分数：");
    scanf("%d",&score);
    int area = score/10;
    printf("等级为：");
    switch(area){
        case 10:
        case 9: printf("A\n");break;
        case 8: printf("B\n");break;
        case 7: printf("C\n");break;
        case 6: printf("D\n");break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("E\n");break;
        default:printf("输入的数据不正确\n");
    }
    return 0;
}
