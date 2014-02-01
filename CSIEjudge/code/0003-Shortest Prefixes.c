#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[2000][50];
    char output[2000][50];
    int i,j,k,lineNum;
    int length;
    for (i=0;;i++){
        if (gets(input[i]) == NULL){
            break;
        }
    }
    lineNum = i;
    for (i=0;i<lineNum;i++){
        length = 0;
        for (j=0;j<lineNum;j++){
            if (j != i){
                for (k=0;k<strlen(input[i]);k++){
                    if ( input[i][k] == input[j][k] ){
                        output[i][k] = input[i][k];
                        if (k == strlen(input[i]) - 1){
                            length = k;
                            break;
                        }
                    }
                    else{
                        if (k > length){
                            length = k;
                        }
                        output[i][k] = input[i][k];
                        break;
                    }
                }
            }
        }
        output[i][length+1] = '\0';
    }
    
    for (i=0;i<lineNum;i++){
        printf("%s %s\n",input[i],output[i]);
    }
    return 0;
}
