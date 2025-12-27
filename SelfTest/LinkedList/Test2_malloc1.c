#include <stdio.h>
#include <malloc.h>
#include <string.h>

//定义链表结构体的方式2：使用typedef关键字，可以设置别名
typedef struct Student{
    char name[64];
    char gender;
    double height;
    struct Student* next;
}Student;

//测试动态分配链表的创建、增加节点、遍历、清理内存
int main(){
    //system("chcp 65001");
    //定义链表头指针，指向首元节点
    Student* head = NULL;
    /* 由于动态分配的链表的节点只能通过指针间接调用，所以要先定义两个指针：
     * 1. lastPrt始终指向最后一个节点，便于在新创建节点的时候，
     *    可以直接把新节点接到原来最后一个节点的后面 (lastPrt->next = newPrt)
     * 2. newPrt始终指向新创建的指针，便于在新节点中输入数据
     */
    Student* lastPrt = NULL;
    //使用malloc函数在堆空间中动态分配一块内存，作为新节点，并将其赋值给newPrt
    Student* newPrt = (Student*) malloc(sizeof(Student));
    //向新节点中写入数据
    strcpy(newPrt->name, "张三");
    newPrt->gender = 'M';
    newPrt->height = 185.0;
    //由于这是创建的第一个节点，所以头指针和lastPrt都和newPrt相同，都指向首元节点
    head = newPrt;
    lastPrt = newPrt;

    //批量循环创建节点。在新节点中，让用户从键盘录入数据。
    //为了避免混乱，先定义变量用于接收用户录入的数据
    char inputName[64], inputGender;
    double inputHeight;
    char choice;
    //循环赋值，只要用户最后输入的choice不是0，就继续创建节点。
    do{
        //用户录入数据
        printf("请输入姓名：");
        gets_s(inputName, 64);
        printf("请输入性别 (M/F)：");
        scanf("%c",&inputGender);
        printf("请输入身高 (cm)：");
        scanf("%lf",&inputHeight);
        getchar();
        //将newPrt重新赋值为新的动态分配的内存
        newPrt = (Student*) malloc(sizeof(Student));
        strcpy(newPrt->name, inputName);
        newPrt->gender = inputGender;
        newPrt->height = inputHeight;
        //让原先最后一个节点的next指向新的节点，将它们连接
        lastPrt->next = newPrt;
        //确保lastPrt始终指向最后一个节点
        lastPrt = newPrt;
        lastPrt->next = NULL;
        printf("是否继续添加(输入0终止)：");
        scanf("%c",&choice);
    }while(choice != '0');

    printf("----------------\n");

    //遍历动态链表
    for(Student* i = head; i!=NULL; i = i->next){
        printf("姓名：%s\n性别：%c\n身高：%lf\n",i->name,i->gender,i->height);
        printf("----------------\n");
    }

    return 0;
}