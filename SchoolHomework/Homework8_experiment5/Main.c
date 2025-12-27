#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DELMITER "--------------------------------------------"

//所有函数原型声明
void printMenu();
void add();
void delete();
void find();
void average();
void sort();
void quit();

//结构变量定义
typedef struct Student{
    char number[20];
    char name[100];
    char gender;
    int age;
    double englishScore;
    double mathScore;
    double cProgramScore;
    double average;
}Student;

//定义相关变量
//因为时间不够，所以用数组来实现数据在内存模拟的存储，
//不能像链表那样无限添加节点，也不能输出文件持久化保存。
Student stu[100];
int count = 0;
int inputError = 0;

/**
 * @author 张家懿
 * 主函数用于判断输入的内容并调用其他函数功能
 */
int main(void){
    int inputChoice = 0;
    system("chcp 65001");//设置控制台编码为UTF-8以解决中文乱码问题
    system("cls");
    puts("欢迎使用学生信息管理程序！");

    while(1){
        
        if(inputError){
            puts("输入的选项有误，请重新输入。");
            inputError = 0;
        }
        printMenu();
        printf("Choice: ");
        inputChoice = getchar();
        while(getchar() != '\n') continue;//每次选择只读取一个字符，多余字符通过循环吸收
        
        system("cls");
        printf("你输入的选择为：%c\n",inputChoice);
        switch(inputChoice){
            case '1':
            case 'i':
            case 'I': add(); break;

            case '2':
            case 'd':
            case 'D': delete(); break;
            case '3':
            case 'f':
            case 'F': find(); break;
            case '4':
            case 'a':
            case 'A': average(); break;
            case '5':
            case 's':
            case 'S': sort(); break;
            case '6':
            case 'q':
            case 'Q': quit(); break;
            default : inputError = 1; break;
        }
        
    }
}

/**
 * @author 张奕聪
 * 打印菜单的函数。
 */
void printMenu(){
    printf("功能选择：\n");
    //printf("  0. 展示所有信息\n");
    printf("  1. input (i)\n");
    printf("  2. delete (d)\n");
    printf("  3. find (f)\n");
    printf("  4. average (a)\n");
    printf("  5. sort (s)\n");
    printf("  6. quit (q)\n");
}

/**
 * @author 张家懿
 * 添加学生信息
 */
void add(){
    if(count>=100) puts("对不起，受限于技术，最多添加100个学生信息！");

    puts("----------------添加学生信息----------------");
    puts("请输入以下内容");

    printf("学生学号：");
    gets_s(stu[count].number,10);

    printf("学生姓名：");
    gets_s(stu[count].name,100);

    printf("学生性别（M/F/O）：");
    stu[count].gender = getchar();
    while(getchar() != '\n') continue;//只读取一个字符，多余字符通过循环吸收

    while(stu[count].gender != 'M' && stu[count].gender != 'F' && stu[count].gender != 'O'){
        puts("输入的数据有误，请重新输入！");
        printf("学生性别（M/F/O）：");
        stu[count].gender = getchar();
        while(getchar() != '\n') continue;//只读取一个字符，多余字符通过循环吸收
    }

    printf("学生年龄：");
    scanf("%d",&stu[count].age);
    while(stu[count].age<=3){
        puts("输入的数据有误，请重新输入！");
        printf("学生年龄：");
        scanf("%d",&stu[count].age);
    }

    printf("学生英语成绩：");
    scanf("%lf",&stu[count].englishScore);

    printf("学生数学成绩：");
    scanf("%lf",&stu[count].mathScore);

    printf("学生C语言程序设计成绩：");
    scanf("%lf",&stu[count].cProgramScore);
    getchar();//吸收最后一个换行符

    stu[count].average = (stu[count].englishScore + stu[count].mathScore +
        stu[count].cProgramScore)/3;

    count++;
    system("cls");//清空控制台
    puts("添加成功！");
    puts(DELMITER);//用宏定义常量打印一条横杠
}

void delete(){
    char number[10];
    int index = -1;

    if(count==0) {
        puts("当前无学生信息，不能进行删除。");
        return;
    }

    puts("----------------删除学生信息----------------");
    printf("要删除的学生的学号：");
    gets_s(number,10);

    //查找学生学号，存储对应索引
    for(int i = 0; i<count; i++){
        if(strcmp(stu[i].number,number)==0){
            index = i;
        }
    }
    //如果查不到，应该结束当前方法
    if(index == -1){
        puts("没有查找到相关信息。");
        return;
    }

    //为避免误操作，先输出学生的基本几项信息，在确认是否要删除
    system("cls");
    puts("以下是你要删除的学生的信息");
    printf("学号：%s\n",stu[index].number);
    printf("姓名：%s\n",stu[index].name);
    printf("性别：%c\n",stu[index].gender);
    printf("年龄：%d\n",stu[index].age);
    puts("确定要删除此学生的信息吗？(y/n)");
    printf(">>> ");
    int choice = getchar();
    while(getchar() != '\n') continue;//只读取一个字符，多余字符通过循环吸收

    if(choice=='y'){
        //删除对应学生信息，把后面所有信息都往前挪
        for(int i = index; i<count-1; i++){
            stu[i] = stu[i+1];
        }
        count--;
        system("cls");
        puts("删除成功！");
    }
    
}

void find(){
    char number[10];
    int index = -1;

    if(count==0) {
        puts("当前无学生信息，不能进行删除。");
        return;
    }

    puts("----------------查找学生信息----------------");
    printf("要查找的学生的学号：");
    gets_s(number,10);
    
    //查找学生学号，存储对应索引
    for(int i = 0; i<count; i++){
        if(strcmp(stu[i].number,number)==0){
            index = i;
        }
    }

    //如果查不到，应该结束当前方法
    if(index == -1){
        puts("没有查找到相关信息。");
        return;
    }

    //如果查到了，输出相应学生信息
    puts(">>>学生成绩信息<<<");
    /*printf("学号：%s\n",stu[index].number);
    printf("姓名：%s\n",stu[index].name);
    printf("性别：%c\n",stu[index].gender);
    printf("年龄：%d\n",stu[index].age);*/
    printf("英语成绩：%.1lf\n",stu[index].englishScore);
    printf("数学成绩：%.1lf\n",stu[index].mathScore);
    printf("C语言程序设计成绩：%.1lf\n",stu[index].cProgramScore);
    printf("平均成绩：%.1lf\n",stu[index].average);
    
    puts(DELMITER);//打印一条分隔线
}

void average(){
    /*int choice = 0;
    double sum = 0;*/

    if(count==0) {
        puts("当前无学生信息，不能进行平均成绩。");
        return;
    }

    puts("-----------------求平均成绩-----------------");
    //没看到题目要求，写错了，现在注释到重写
    /*printf("求哪一科的平均成绩？");
    printf("1. 英语\\n2. 数学\n3. C语言\n");
    printf(">>> ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: for(int i = 0; i<count; i++) sum += stu[i].englishScore; break;
        case 2: for(int i = 0; i<count; i++) sum += stu[i].mathScore; break;
        case 3: for(int i = 0; i<count; i++) sum += stu[i].cProgramScore; break;
        default: printf("输入错误。\n"); return;
    }*/

    char number[10];
    int index = -1;
    printf("要查找的学生的学号：");
    gets_s(number,10);
    //查找学生学号，存储对应索引
    for(int i = 0; i<count; i++){
        if(strcmp(stu[i].number,number)==0){
            index = i;
        }
    }
    //如果查不到，应该结束当前方法
    if(index == -1){
        puts("没有查找到相关信息。");
        return;
    }
    printf("平均成绩：%.1lf\n",stu[index].average);
    puts(DELMITER);//打印一条分隔线
}

void sort(){
    int choice = 0;

    if(count==0) {
        puts("当前无学生信息，不能进行排序。");
        return;
    }

    puts("----------------排序学生信息----------------");
    /*puts("按什么排序？");
    printf("1. 年龄\n2. 英语成绩\n3. 数学成绩\n4. C语言成绩\n5. 平均成绩\n");
    printf(">>> ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1: 
            
        case 2: 
            
        case 3: 
            for(int i = 0; i<count-1; i++){
                for(int j = 0; j<count-1-j; j++){
                    if(stu[j].mathScore>stu[j+1].mathScore){
                        Student temp = stu[j];
                        stu[j] = stu[j+1];
                        stu[j+1] = temp;
                    }
                }
            }
        default: printf("输入错误。\n"); return;
    }*/

    for(int i = 0; i<count-1; i++){
        for(int j = 0; j<count-1-i; j++){
            if(stu[j].average>stu[j+1].average){
                Student temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }
    printf("成功按平均分排序\n");
    printf("学号    姓名    英语    数学    C语言   平均分\n");
    for(int i = 0; i<count; i++){
        printf("%-7s %-7s %-7.1lf %-7.1lf %-7.1lf %-7.1lf",
            stu[i].number,stu[i].name,stu[i].englishScore,
            stu[i].mathScore,stu[i].cProgramScore,stu[i].average);
        putchar('\n');
    }
    puts(DELMITER);//打印一条分隔线
}

void quit(){
    puts("确定要退出吗？(y/n)\n由于技术问题，所有数据都不会保存！QAQ");
    printf(">>> ");
    int choice = getchar();
    if(choice == 'y' || choice == 'Y'){
        //puts("程序退出，感谢您的使用。");
        exit(0);
    }
}
