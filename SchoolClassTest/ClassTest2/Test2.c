#include <stdio.h>
#include <stdlib.h>

int main(){
    double sign=0,num=0;
    for(int i = 0;i<5;i++){
        if(sign==0) num += 1.0/(i*2+1);
        else num -= 1.0/(i*2+1);
        sign = !sign;
    }
    printf("%lf",num);
}
