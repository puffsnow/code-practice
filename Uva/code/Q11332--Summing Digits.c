#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i;
    int total;
    char input[500];
    int length;
    
    while(1){
        gets(input);
        
        if(strcmp(input, "0") == 0){
            break;
        }
    
        total = -1;
    
        while(total > 9 || total < 0){
            length = strlen(input);
            total = 0;
            
            for(i=0; i<length; i++){
                total += input[i] - 48;
            }
            
            sprintf(input, "%d", total);
        }
        
        printf("%d\n", total);
    }



    return 0;
}
