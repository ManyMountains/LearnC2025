#include <stdio.h>

/*
（七）三个学生考五门课程，计算出每个学生的平均成绩及单科成绩的平均分并输出。

输入/输出格式举例如下：
输入成绩：
65   87   68   56   78
83   94   67   85   91
71   75   69   84   89
输出结果：
65      87      68      56      78    70.5
83      94      67      85      91    84.0
71      75      69      84      89    77.5
73.0    85.3    68.0    86.0    77.3    
注：每个学生的平均成绩放在最后一列的对应行上，单科成绩的平均分放在最后一行的对应列上。
*/

int main(){
    //输入学生成绩
    int score[3][5];
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<5; j++) {
            scanf("%d",&score[i][j]);
        }
    }
    //定义用于存储学生平均成绩和单科平均成绩的数组
    double studentAverage[3];
    double singeAverage[5];
    //计算学生平均成绩
    for(int i = 0; i<3; i++){
        double sum = 0;
        for (int j = 0; j<5; j++) {
            sum+=score[i][j];
        }
        studentAverage[i] = sum/5;
    }
    //计算单科平均成绩
    for(int j = 0; j<5; j++){
        double sum = 0;
        for (int i = 0; i<3; i++) {
            sum+=score[i][j];
        }
        singeAverage[j] = sum/3;
    }
    //输出结果
    for (int i = 0; i<3; i++) {
        for(int j = 0; j<5; j++){
            printf("%-6d",score[i][j]);
        }
        printf("%.1lf\n",studentAverage[i]);
    }
    for(int i = 0; i<5; i++){
        printf("%-6.1lf",singeAverage[i]);
    }
    printf("\n");
    return 0;
}