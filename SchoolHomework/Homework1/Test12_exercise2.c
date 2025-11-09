/**
 * 例2：求ax^2+bx+c=0的根
 * @author 张家懿
 */

#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    //1. 定义变量
    float a,b,c,delta,x1,x2,p,q;
    //2. 从键盘接收float类型的a、b、c数据
    printf("此程序用于求解一元二次方程\n");
    printf("----------------\n");
    printf("请输入a（二次项的系数）：");
    scanf("%f",&a);
    printf("请输入b（一次项的系数）：");
    scanf("%f",&b);
    printf("请输入c（常数项）：");
    scanf("%f",&c);
    printf("----------------\n");
    //3. 计算delta
    delta=b*b-4*a*c;
    //4. 判断delta是否大于等于0
    if(delta>=0){
        //5. 将求根公式依据加减号拆分成两部分——p和q来计算
        p=-b/(2*a);  
        q=sqrt(delta)/(2*a);
        //6. 计算两根
        x1=p+q;
        x2=p-q;
        //7. 输出结果
        printf("方程为：(%.2f)x^2+(%.2f)x+%.2f\n",a,b,c);
        printf("x1=%.2f\nx2=%.2f\n",x1,x2);
    }else{
        //若delta<0，直接输出结果，说明此方程无实数根
        printf("方程为：(%.2f)x^2+(%.2f)x+%.2f\n",a,b,c);
        printf("您输入的方程无实数根。\n");
    }
    return 0;
    
}
