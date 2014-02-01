#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[64];
    int oneCou,zeroCou;
    int i;
    
    while(1){
        gets(input);
        oneCou = 0;
        zeroCou = 0;
        if (input[0] == '#'){
            break;
        }
        for(i=0;i<strlen(input);i++){
            if (input[i] == '1')
                oneCou++;
            else if (input[i] == '0')
                zeroCou++;
            else if (input[i] == 'o'){
                if (oneCou % 2 == 0)
                    input[i] = '1';
                else
                    input[i] = '0';
            }
            else{
                if (oneCou % 2 == 0)
                    input[i] = '0';
                else
                    input[i] = '1';
            }
        }
        printf("%s\n",input);
    } 
    return 0;
}
