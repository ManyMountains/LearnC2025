#include <stdio.h>
#include <stdlib.h>

int main() {
    double a,b,c,maxNum,midNum,minNum;
    scanf("%lf %lf %lf",&a,&b,&c);
    maxNum = a;
    minNum = a;
    midNum = a;
    if(b>maxNum){
        maxNum=b;
        if(c<minNum){
            minNum=c;
            midNum=a;
        }
        if(a<minNum){
            minNum=a;
            midNum=c;
        }
    }

    if(c>maxNum){
        maxNum=c;
        if(b<minNum){
            minNum=b;
            midNum=a;
        }

        if(a<minNum){
            minNum=a;
            midNum=b;
        }
    }

    if(a==maxNum){
        if(b<minNum){
            minNum=b;
            midNum=c;
        }
        if(c<minNum){
            minNum=b;
            midNum=c;
        }
    }

    printf("%lf,%lf,%lf",minNum,midNum,maxNum);

    return 0;
}
