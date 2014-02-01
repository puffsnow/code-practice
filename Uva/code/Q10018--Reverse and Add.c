#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test(unsigned int n){
    char ex[100];
    int len,i;
    sprintf(ex,"%u",n);
    len = strlen(ex);
    for (i=0;i<len;i++){
        if (ex[i] != ex[len - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int caseNum,i,j,len;
    int plusTime;
    unsigned int input,trans;
    char ex[100],exTrans[100];
    scanf("%d",&caseNum);
    for (i=0;i<caseNum;i++){
        plusTime = 0;
        scanf("%u",&input);
        for (plusTime = 0;;plusTime++){
            if (test(input)){
                printf("%d %u\n",plusTime,input);
                break;
            }
            sprintf(ex,"%u",input);
            len = strlen(ex);
            for (j=0;j<len;j++){
                exTrans[j] = ex[len - j - 1];
            }
            exTrans[j] = '\0';
            sscanf(exTrans,"%u",&trans);
            input = input + trans;
        }
    }        
    return 0;
}
