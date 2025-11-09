#include <stdio.h>

/**
 * （四）输入一个整数，将其数值按小于10、10~99、100~999、1000以上分类并显示。
 * 例如，输入358时，显示：358 is 100 to 999.
 * @author 张家懿
 */

int main(){
    //1. 定义变量，输入数据
    int num;
    printf("请输入一个整数：");
    scanf("%d",&num);
    //2. 判断和输出结果
    printf("%d",num);
    if(num<10){
        printf(" is <10.\n");
    }else if(num>=10 && num<=99){
        printf(" is 10 to 99.\n");
    }else if(num>=100 && num<=999){
        printf(" is 100 to 999.\n");
    }else{
        printf(" is >1000.\n");
    }

    return 0;
}