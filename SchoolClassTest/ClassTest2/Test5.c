#include <stdio.h>
#include <stdlib.h>

/**
 * Ã°ÅİÅÅĞòËã·¨
 */

int main() {
    int arr[5] = {23,34,12,765,63};
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i<5;i++){
        printf("%-4d",arr[i]);
    }
    return 0;
}
