#include <stdio.h>

/**
 * 给出一百分制的成绩，要求输出成绩等级'A'、'B'、'C'、'D'、'E'。
 * 90分以上为A，80~89分为B，70-79分为C，60-69分为D，60分以下为E。
 * @author 张家懿
 */

int main(){
    int score;
    scanf("%d",&score);
    printf("等级为：");
    if(score>=90 && score<=100){
        printf("A\n");
    }else if(score>=80 && score<=89){
        printf("B\n");
    }else if(score>=70 && score<=79){
        printf("C\n");
    }else if(score>=60 && score<=69){
        printf("D\n");
    }else if(score<60){
        printf("E\n");
    }else{
        printf("输入的数据不正确。\n");
    }
    return 0;

}