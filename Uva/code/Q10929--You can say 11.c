#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[2000];
    char trans[2];
    
    trans[1] = '\0';
    
    int odd,even,len,temp;
    int i;
    while(1){
        gets(input);
        if (strcmp(input,"0") == 0){
            break;
        }
        odd = 0;
        even = 0;
        len = strlen(input);
        for (i=0;i<len;i++){
            trans[0] = input[i];
            sscanf(trans,"%d",&temp);
            if (i % 2 == 0){
                even += temp;
            }
            else{
                odd += temp;
            }
        }
        temp = even - odd;
        
        if (temp%11 == 0){
            printf("%s is a multiple of 11.\n",input);
        }
        else{
            printf("%s is not a multiple of 11.\n",input);
        }
    }   
    return 0;
}
