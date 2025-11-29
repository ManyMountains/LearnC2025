#include <stdio.h>

//定义链表结构体的方式1
// struct Student1{
//     char name[64];
//     char gender;
//     double height;
//     struct Student1* next;
// };

//定义链表结构体的方式2：使用typedef关键字，可以设置别名
typedef struct Student{
    char name[64];
    char gender;
    double height;
    struct Student* next;
}Student;

//测试静态链表的声明和操作
int main(){
    //定义链表头指针
    Student* head = NULL;
    //定义结构体变量（静态方式）
    Student s1 = {.name = "张三", .gender = 'M', .height = 185.0, .next = NULL};
    Student s2 = {.name = "李四", .gender = 'F', .height = 164.9, .next = NULL};
    Student s3 = {.name = "王五", .gender = 'M', .height = 175.4, .next = NULL};
    //将每个节点连接起来，构成静态链表
    head = &s1;
    s1.next = &s2;
    s2.next = &s3;

    //遍历静态链表
    for (Student* i = head; i!=NULL; i=i->next) {
        printf("姓名：%s\n性别：%c\n身高：%lf\n", i->name, i->gender, i->height);
        printf("----------");
    }
    
}