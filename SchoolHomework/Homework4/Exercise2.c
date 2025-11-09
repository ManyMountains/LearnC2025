#include <stdio.h>

/**
 * º∆À„1!+2!+3!+4!+...+20!
 * @author ’≈º“‹≤
 */

int main(){
    double sumi = 0;
    double sumj = 1;
    for(int i = 1;i<=20;i++){
        for(int j = i;j>=1;j--){
            sumj*=j;
        }
        sumi+=sumj;
    }

    printf("1!+2!+3!+4!+...+20!=%lld\n",sumi);
   
}