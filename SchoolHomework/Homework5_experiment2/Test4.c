#include <stdio.h>

/**
 * （四）输出以下图案
 * 
 *  *               *               *****             1               5 5 5 5 5
 *  ***            ***               *****            2 2               4 4 4 4
 *  *****         *****               *****           3 3 3               3 3 3
 *               *******               *****          4 4 4 4               2 2
 *                                                                            1
 */

int main(){
    for(int i = 1;i<=3;i++){
        for(int j = 1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i=1;i<=4;i++){    
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        printf("*****\n");
    }

    printf("\n");

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}