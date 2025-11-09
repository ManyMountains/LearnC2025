/**
 * 有一圆柱体，底半径为r，圆柱高为h。求： 底面积、表面积，底周长、体积。
 * @author 张家懿
 */

#include <stdio.h>

int main(int argc, char const *argv[]){
    float fAread,fAreas,fLen,fV,r,h; //声明变量
    scanf("%f,%f",&r,&h);//输入原始数据
    fLen=2.*3.1415926*r;
    fAread=3.1415926*r*r;
    fAreas=2.0*fAread+fLen*h;
    fV=fAread*h;//运算，并赋给变量
    printf("%f\n%f\n%f\n%f\n", fLen,fAread,fAreas,fV);/*输出结果*/
    return 0;
}

