#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[9];
    int i;
    int flag;
    
    while(scanf("%d",&input[8]) != EOF){
        for(i=7;i>=0;i--){
            scanf("%d",&input[i]);
        }
        flag = 0;
        for(i=8;i>=0;i--){
            if (input[i] != 0){
                if (flag == 1){
                    if (input[i] > 0){
                        printf(" + ");
                    }
                    else{
                        printf(" - ");
                        input[i] = input[i]* (-1);
                    }
                }
                
                if (flag == 0 && input[i] == -1){
                    printf("-");
                    if (i==0){
                        printf("1");
                    }
                }
                
                else if ((flag == 0 && input[i] < 0 ) || (input[i]>0 && input[i] != 1) ){
                    printf("%d",input[i]);
                }
                    
                else if (i==0 && input[i] == 1){
                    printf("1");
                }
                
                if (i > 0){
                    printf("x");
                }
                
                if (i > 1){
                    printf("^%d",i);
                }                
                flag = 1;
            }
        }
        if (flag == 0){
            printf("0");
        }
        printf("\n");
    }    
    return 0;
}
