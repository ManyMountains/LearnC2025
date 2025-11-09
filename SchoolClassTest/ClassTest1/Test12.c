#include <stdio.h>
#include <stdlib.h>

/**
 * 用switch-case分支结构判断学生成绩所处的等级：
 * 90-100为A，80-90为B，70-80为C，60-70为C，60分以下为不合格
 * @author 张家懿
 */

int main(){
    double score;
    scanf("%lf",&score);
    int a = (int)score/10;
    switch(a){
        case 10:
        case 9: printf("A\n");break;
        case 8: printf("B\n");break;
        case 7: printf("C\n");break;
        case 6: printf("D\n");break;
        default:printf("不合格\n");
    }
    return 0;
}
