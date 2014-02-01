#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char first[500];
    char second[500];
    char answer[500];
    int tempF,tempS;
    int caseNum,add;
    int i,j,k,digit;
    
    scanf("%d",&caseNum);
    
    for (i=0;i<caseNum;i++){
        scanf("%s %s",first,second);
        add = 0;
        digit = 0;
        j = strlen(first) -1;
        k = strlen(second) -1;
        while(j >= 0 || k >= 0){
            if (first[j] == '1' && j >= 0){
                tempF = 1;
                j = j - 1;
            }
            else{
                tempF = 0;
                if (j >= 0){
                    j = j - 1;
                }
            }
            if (second[k] == '1' && k >= 0){
                tempS = 1;
                k = k - 1;
            }
            else{
                tempS = 0;
                if (k >= 0){
                    k = k - 1;
                }
            }
            if (tempF + tempS + add == 2 || tempF + tempS + add == 0){
                answer[digit] = '0';
            }
            else{
                answer[digit] = '1';
            }
            digit++;
            if (tempF + tempS + add >= 2){
                add = 1;
            }
            else{
                add = 0;
            }
            if (k<0 && j<0 && add == 1){
                answer[digit] = '1';
                digit++;
            }
        }
        printf("%d ",i+1);
        for(j=digit-1;j>=0;j--){
            if (answer[j] != '0'){
                printf("%c",answer[j]);
                break;
            }
            if (j == 0){
                printf("0");
            }
        }
        for(j=j-1;j>=0;j--){
            printf("%c",answer[j]);
        }
        printf("\n");
    }
    return 0;
}
