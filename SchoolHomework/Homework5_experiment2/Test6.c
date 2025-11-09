#include <stdio.h>

/**
 * 编写一个程序，打印出所有的水仙花数。例：153=1³+5³+3³
 */

int main(){
    // int bit,tenBit,hundred;
    for(int i=100;i<999;i++){
        int bit = i%10;
        int tenBit = i/10%10;
        int hundred = i/100;
        if(i==bit*bit*bit+tenBit*tenBit*tenBit+hundred*hundred*hundred){
            printf("%-4d",i);
        }
    }
    printf("\n");
}