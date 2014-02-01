#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i;
    int total = 0;
    char c[2];
    c[1] = '\0';
    
    while((c[0] = getchar()) != EOF){
        if (isdigit(c[0])){
            total += atoi(c);
        }
        else if (c[0] == '!'){
            printf("\n");
        }
        else if (c[0] == 'b'){
            for (i=0;i<total;i++){
                printf(" ");
            }
            total = 0;
        }
        else if (c[0] == '\n'){
            printf("\n");
        }
        else{
            for (i=0;i<total;i++){
                printf("%c",c[0]);
            }
            total = 0;
        }
    }
    return 0;
}
