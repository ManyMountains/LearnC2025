/**
 * 题目描述
 * 
 * BMI指数是国际上常用的衡量人体胖瘦程度的一个标准，
 * 其算法是m/h2(40≤m≤120,1.4≤h≤2.0),其中m是指体重(千克),h是指身高(米)。
 * 
 * 不同体型范围与判定结果如下：
 * · 小于18.5：体重过轻。输出 Underweight;
 * · 大于等于18.5且小于24：正常体重。输出 Normal;
 * · 大于等于24：肥胖。不仅要输出BMI值，还要换行输出 Overweight ;
 * 现在给出体重和身高数据,需要根据BMI指数判断体型状态并输出对应的判断。?
 */

#include <stdio.h>

int main() {
    //1. 录入身高和体重
    double m, h, bmi;
	scanf("%lf,%lf",&m,&h);
    //2. 计算
	bmi = m / (h * h); 
    //3. 比较和输出结果
	if (bmi < 18.5){
        printf("Underweight" );
    }else if (bmi >= 18.5 && bmi < 24){
        printf("Normal");
    }else if (bmi >= 24){
	    printf("%lf\n", bmi);
	    printf("Overweight");
    }
	return 0;
}
