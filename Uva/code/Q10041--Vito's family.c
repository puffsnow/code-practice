#include <stdio.h>
#include <stdlib.h>

int main(){

    int caseNum;
    int homeNum;
    int temp,mid,total;
    int locat[1000];
    int i,j,k;
    
    scanf("%d",&caseNum);
    
    for (i=0;i<caseNum;i++){
        total = 0;
        scanf("%d",&homeNum);
        for (j=0;j<homeNum;j++){
            scanf("%d",&locat[j]);
        }
        for (k=0;k<homeNum-1;k++){
            for (j=0;j<homeNum-1;j++){
                if (locat[j]>locat[j+1]){
                    temp = locat[j];
                    locat[j] = locat[j+1];
                    locat[j+1] = temp;
                }
            }
        }
        mid = homeNum / 2;
        for (j=0;j<homeNum;j++){
            if (locat[mid] > locat[j]){
                total+=(locat[mid] - locat[j]);
            }
            else if (locat[j] >locat[mid]){
                total+=(locat[j] - locat[mid]);
            }
        }
        printf("%d\n",total);
    }

    return 0;

}
