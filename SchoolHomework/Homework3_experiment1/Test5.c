#include <stdio.h>

/**
 * （五）给出一个百分制成绩，要求输出成绩等级A、B、C、D、E。
 * 90分以上为A，8l-89分为B，70-79分为C，60-69分为D，60分以下为E。
 * （要求：分别用if语句和switch语句来实现。）
 */

int main(){
    //使用if-else语句实现
    int score;
    printf("请输入分数：");
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
}