#include <stdio.h>

/**
 * 【例4.6】
 * 按照考试成绩的等级输出百分制分数段，
 * A等级为85分以上，B等级为70~84分，C等级为60~69分，D等级为60分以下。
 * 成绩的等级从键盘录入。 
 */ 

int main(){
    char grade = getchar();
    printf("你的分数：");
    switch(grade){
        case 'A': printf("85~100\n");break;
        case 'B': printf("70~84\n");break;
        case 'C': printf("60~69\n");break;
        case 'D': printf("0~59\n");break;
    }
}