#include <stdio.h>

int* search(double (* p)[4], int number);

int main(){
    double scores[3][4] = {{60,70,80,90},{60,70,80,90},{60,70,80,90}};
    int* p = search(scores, 2);
    for(int i = 0; i<4; i++){
        printf("%d",*(p+i));
    }
}

int* search(double (* p)[4], int number){
    return (*p + number);
}