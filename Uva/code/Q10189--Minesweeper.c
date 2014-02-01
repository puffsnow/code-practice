#include <stdio.h>
#include <stdlib.h>

int main(){
    int line,column;
    int i,j,k;
    int bomb;
    for (i=1;i>0;i++){
        scanf("%d%d",&line,&column);
        if (line == 0 && column == 0){
            break;
        }
        if (i>1){
            printf("\n");
        }
        char map[line][column];
        for (j=0;j<line;j++){
            scanf("%s",map[j]);
        }
        printf("Field #%d:\n",i);
        for (j=0;j<line;j++){
            for (k=0;k<column;k++){
                if (map[j][k] == '*'){
                    printf("*");
                }
                else{
                    bomb = 0;
                    if (j>0 && k>0 && map[j-1][k-1] == '*'){
                        bomb++;
                    }
                    if (j>0 && map[j-1][k] == '*'){
                        bomb++;
                    }
                    if (j>0 && k<column-1 && map[j-1][k+1] == '*'){
                        bomb++;
                    }
                    if (k>0 && map[j][k-1] == '*'){
                        bomb++;
                    }
                    if (k<column-1 && map[j][k+1] == '*'){
                        bomb++;
                    }
                    if (j<line-1 && k>0 && map[j+1][k-1] == '*'){
                        bomb++;
                    }
                    if (j<line-1 && map[j+1][k] == '*'){
                        bomb++;
                    }
                    if (j<line-1 && k<column-1 && map[j+1][k+1] == '*'){
                        bomb++;
                    }
                    printf("%d",bomb);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
