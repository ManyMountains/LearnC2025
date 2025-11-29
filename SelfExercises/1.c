#include <stdio.h>

int f(int a){
    int b = 0;
    static int c = 3;
    a = c++, b++;
    return a;
}

int main(){
    int a, i, t;
    a = 3;
    for(i = 0; i<3; i++) t = f(a++);
    printf("%d\n",t);
    return 0;
}