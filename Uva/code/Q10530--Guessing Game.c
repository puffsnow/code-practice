#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int higher[10000];
    int lower[10000];
    int input,highNum,lowNum;
    int flag,i;
    char reply[100];
    
    while(1){
        highNum = 0;
        lowNum = 0;
        scanf("%d",&input);
        if (input == 0){
            break;
        }
        gets(reply);
        while(1){
            gets(reply);
            if (strcmp(reply,"too high") == 0){
                higher[highNum++] = input;
            }
            else if (strcmp(reply,"too low") == 0){
                lower[lowNum++] = input;
            }
            else{
                flag = 0;
                for (i=0;i<highNum;i++){
                    if (input >= higher[i]){
                        flag = 1;
                    }
                }
                for (i=0;i<lowNum;i++){
                    if (input <= lower[i]){
                        flag = 1;
                    }
                }
                
                if (flag == 0){
                    printf("Stan may be honest\n");
                }
                else{
                    printf("Stan is dishonest\n");
                }
                break;
            }
            scanf("%d\n",&input);
        }
    }   
    return 0;
}
