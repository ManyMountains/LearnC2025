#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maxNum = a;

    if(b>maxNum){
        maxNum = b;
    }

    if(c>maxNum){
        maxNum = c;
    }

    printf("max number is %d.",maxNum);
    return 0;
}
