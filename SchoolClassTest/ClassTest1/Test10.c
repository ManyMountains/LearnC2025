/**
从键盘输入4个人成绩，判断90分以上（含）有多少人，80-90有多少人，打印
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c,d,num1,num2;
    num1=0;
    num2=0;

    printf("请输入4个人的成绩，用空格分隔：\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=90){
        num1++;
    }else if(a>=80 && a<90){
        num2++;
    }

    if(b>=90){
        num1++;
    }else if(b>=80 && b<90){
        num2++;
    }

    if(c>=90){
        num1++;
    }else if(c>=80 && c<90){
        num2++;
    }

    if(d>=90){
        num1++;
    }else if(d>=80 && d<90){
        num2++;
    }

    printf("90分以上（含）有%d人；\n80分（含）~90分有%d人。\n",num1,num2);
    return 0;
}
