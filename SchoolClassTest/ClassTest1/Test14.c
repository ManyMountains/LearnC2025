#include <stdio.h>
#include <stdlib.h>

/**
 * 【例5.4】在1000名学生中举行慈善募捐，当总数达到10万元时就结束，
 * 统计此时捐款的人数和每人捐款的平均值
 * @author 张家懿
*/

int main(){
    int amount,aver,total,i;
    total=0;
    for(i = 1;i<=1000;i++){
        printf("请输入捐款金额：");
        scanf("%d",&amount);
        total+=amount;
        if(total>=100000) break;
    }
    aver=total/i;
    printf("募捐人数：%d\n平均每人捐款：%d\n",i,aver);
}
