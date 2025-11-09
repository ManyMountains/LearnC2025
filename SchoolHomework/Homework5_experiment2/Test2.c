#include <stdio.h>

/**
 * （二）输入—行字符，分别统计出其中的大写字母、小写字母、数字和其他字符的个数。
 */

int main(){
    char str[101];
    int capitalCount = 0, lowercaseCount = 0, numberCount = 0, otherCount = 0;
    printf("请输入一行文本，最多100字：\n");
    gets_s(str,100);
    for(int i = 0;i<100;i++){
        if(str[i]=='\0') break;
        else if(str[i]>='A'&&str[i]<='Z') capitalCount++;
        else if(str[i]>='a'&&str[i]<='z') lowercaseCount++;
        else if(str[i]>='0'&&str[i]<='9') numberCount++;
        else otherCount++;
    }
    printf("----------------\n");
    printf("您输入的文本为：\n%s\n",str);
    printf("大写字母：%d\n小写字母：%d\n数字：%d\n其他字符：%d\n",
        capitalCount,lowercaseCount,numberCount,otherCount);
}