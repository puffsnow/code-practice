#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    int s_x, s_y, e_x, e_y;
    int x_sub, y_sub;
    
    
    while(1){
        scanf("%d%d%d%d", &s_x, &s_y, &e_x, &e_y);
        if(s_x == 0 && s_y == 0 && e_x == 0 && e_y == 0){
            break;
        }
        
        x_sub = s_x - e_x;
        y_sub = s_y - e_y;
        
        if (x_sub == 0 && y_sub == 0){
            printf("0\n");
        }
    
        else if (abs(x_sub) == abs(y_sub) || x_sub == 0 || y_sub == 0){
            printf("1\n");
        }
    
        else{
            printf("2\n");
        }
    
    }
    

    system("pause");
    return 0;
}
