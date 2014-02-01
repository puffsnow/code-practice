#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    int temp;
    char output[300];
    int i;
    
    while(1){
        scanf("%d",&input);
        if (input<0){
            break;
        }
        if (input == 0){
            printf("0");
        }
        for (i=0;input>0;i++){
            temp = input % 3;
            input = input / 3;
            sprintf(output+i,"%d",temp);
        }
        output[i]='\0';
        for (i=strlen(output)-1;i>=0;i--){
            putchar(output[i]);
        }
        printf("\n");
    }
    return 0;
}
