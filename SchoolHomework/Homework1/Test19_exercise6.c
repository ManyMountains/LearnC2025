/**
 * 题目描述
 * 八尾勇喜欢吃苹果。她今天吃掉了x(0≤x≤100)个苹果。英语课上学到了apple这个词语,想用它来
 * 造句。如果她吃了1个苹果,就输出 Today,I ate 1 apple.
 * 吃了不止一个苹果,别忘了[3展开apple如果她没有吃,那么就把1换成0;如果她
 * 这个单词后面要加上代表复数的s。你能帮她完成这个句子吗?
 * 
 * @author 张家懿
 */

#include <stdio.h>

int main() {
    int num;
    printf("请输入你今天吃了几个苹果：");
    scanf("%d",&num);
    printf("Today,I ate %d apple",num);
    if(num<=1){
        printf(".\n");
    }else{
        printf("s.\n");
    }
    return 0;
}
