#include <stdio.h>

int main(int argc, char const *argv[]){
    int a=1234;
    float f=123.456;
    static char c[]="Hello,world!";//???¿œ ¶Ω≤¡À¬£ø
    printf("%8d,%-8d\n",a,a);
    printf("%10.2f,%-10.1f\n",f,f);
    printf("%10.5s,%-10.3s\n",c,c);
    return 0;
    /*
     *     1234,1234    
    123.46,123.5     
     Hello,Hel    
     */
}
