#include <stdio.h>

int main(){
    double scores[3][4] = {{60,70,80,90},{60,70,40,90},{50,70,80,90}};
    double (* scoresPrt)[4] = scores;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(*(*(scoresPrt+i)+j)<60){
                printf("%.1lf\n",*(*(scoresPrt+i)));
                printf("%.1lf\n",*(*(scoresPrt+i)+1));
                printf("%.1lf\n",*(*(scoresPrt+i)+2));
                printf("%.1lf\n",*(*(scoresPrt+i)+3));
                break;
            }
        }
    }
}