#include <stdio.h>
#include <stdlib.h>

int main(){
    int lineNum;
    int i,j,total,iBroken,jBroken;
    int flag,broken;
    int data[200][200];

    while(1){
        scanf("%d",&lineNum);
        if (lineNum == 0){
            break;
        }
        
        flag = 0;
        iBroken = -1;
        jBroken = -1;
        
        for (i=0;i<lineNum;i++){
            for (j=0;j<lineNum;j++){
                scanf("%d",&data[i][j]);
            }
        }
        
        broken = 0;
        
        for (i=0;i<lineNum;i++){
            total = 0;
            for (j=0;j<lineNum;j++){
                total += data[i][j];
            }
            if (total % 2 == 1){
                iBroken = i;
                broken++;
            }
            if (broken > 1){
                flag = 1;
                break;
            }
        }
        
        broken = 0;
        
        if (flag == 0){
            for (j=0;j<lineNum;j++){
                total = 0;
                for (i=0;i<lineNum;i++){
                    total += data[i][j];
                }
                if (total % 2 == 1){
                    jBroken = j;
                    broken++;
                }
                if (broken > 1){
                    flag = 1;
                    break;
                }
            }
        }
        
        if (flag == 1){
            printf("Corrupt\n");
        }
        else if (iBroken >= 0){
            printf("Change bit (%d,%d)\n",iBroken+1,jBroken+1);
        }
        else{
            printf("OK\n");
        }
    }
    return 0;
}
