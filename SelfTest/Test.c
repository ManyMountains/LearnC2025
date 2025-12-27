#include <stdio.h>
#include <math.h>

int* perfactNum(int num){
    int factor[512];
    int index = 0;
    for(int i = 1; i <= sqrt(num); i++){
        if(num%i==0){
            factor[index] = i;
            index++;
        }
    }

    int sum = 0;
    for(int i = 0; i<index; i++){
        sum += factor[i];
    }

    if(sum==num){
        return factor;
    }else{
        return NULL;
    }
}

int main(){
    int* factorPrt = NULL;
    for(int i = 1; i<=1000; i++){
        factorPrt = perfactNum(i);
        if(factorPrt!=NULL){
            printf("%d its factors are ",i);
            for(int j = 0; j<sizeof(*factorPrt)/sizeof(int); j++){
                printf("%d ",*(factorPrt+j));
            }
            printf("\n");
        }
    }
    return 0;
}