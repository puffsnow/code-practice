#include <stdlib.h>
#include <stdio.h>

int main()
{
    int caseNum;
    int i,j;
    int misNum;
    char input[10000];
    
    scanf("%d",&caseNum);
    for(i=0;i<caseNum;i++){
        scanf("%d %s",&misNum,input);
        printf("%d ",i+1);
        for (j=0;input[j] != '\0';j++){
            if(misNum - 1 == j){
                continue;
            }
            printf("%c",input[j]);
        }
        printf("\n");
    }    
    return 0;
}
