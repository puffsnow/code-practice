#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char input[100];
    int count = 0;
    int i;
    
    
    while(gets(input) != NULL){       
        for (i=0;input[i] != '\0';i++){
            if (isdigit(input[i])){
                count++;
            }
        }
        for (i=0;i<count;i++){
            printf("9");
        }
        if (count == 0){
            printf("0");
        }
        
        printf("\n");
        count = 0;
    }    
    return 0;   
}
