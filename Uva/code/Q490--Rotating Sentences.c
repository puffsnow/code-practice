#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char input[200][200];
    int flag[200] = {0};
    int lineNum = 0;
    int maxNum = 0;
    int space,temp,i,j,k;
    while(gets(input[lineNum]) != NULL){
        temp = strlen(input[lineNum]);
        if (temp > maxNum){
            maxNum = temp;
        }
        lineNum++;
    }
    
    for (i=0;i<maxNum;i++){
        space = 0;
        for (j = lineNum - 1;j >= 0;j--){
            if (flag[j] == 0){
                if (input[j][i] == '\0'){
                    flag[j] = 1;
                    space++;
                }
                else{
                    for (k=0;k<space;k++){
                        printf(" ");
                    }
                    space = 0;
                    printf("%c",input[j][i]);
                }
            }
            else{
                space++;
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
