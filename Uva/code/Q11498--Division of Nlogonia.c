#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i;
    int p_count;
    
    int c_x, c_y;
    int x, y;
    
    while(1){
        
        scanf("%d", &p_count);
        
        if(p_count == 0){
            break;
        }
    
        scanf("%d%d", &c_x, &c_y);
        
        for(i=0; i<p_count; i++){
            scanf("%d%d", &x, &y);
            
            if(x > c_x && y > c_y){
                printf("NE\n");
            }
            
            else if(x < c_x && y > c_y){
                printf("NO\n");
            }
            
            else if(x < c_x && y < c_y){
                printf("SO\n");
            }
            
            else if(x > c_x && y < c_y){
                printf("SE\n");
            }
            
            else{
                printf("divisa\n");
            }
        }
    
    }

    system("pause");
    return 0;
    
}
