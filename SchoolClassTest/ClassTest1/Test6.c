#include <stdio.h>
#include <stdlib.h>

int main(){
    //例3.1：将华氏度转换为摄氏度：c=5/9(f-32)
    float f,c;
    scanf("%f",&f);
    c = (5.0/9)*(f-32);
    printf("%f",c);

    //例3.2：计算存款利息
    float p0=1000;

    float r1 = 0.0036;
    float p1 = p0*(1+r1);

    float r2  = 0.0225;
    float p2 = p0*(1+r2);


}
