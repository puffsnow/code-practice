#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,j;
    int gameTime,playTime,oneWin,twoWin;
    char pl1,pl2;
    char input[10];
    
    
    scanf("%d\n",&gameTime);
    for (i=0;i<gameTime;i++){
        oneWin = 0;
        twoWin = 0;
        scanf("%d\n",&playTime);
        for (j=0;j<playTime;j++){
            gets(input);
            pl1 = input[0];
            pl2 = input[2];
            if (pl1 == 'R'){
                if (pl2 == 'P')
                    twoWin++;
                if (pl2 == 'S')
                    oneWin++;
            }
            else if (pl1 == 'P'){
                if (pl2 == 'R')
                    oneWin++;
                if (pl2 == 'S')
                    twoWin++;
            }
            else if (pl1 == 'S'){
                if (pl2 == 'R')
                    twoWin++;    
                if (pl2 == 'P')
                    oneWin++;
            }
        }
        if (oneWin > twoWin){
            printf("Player 1\n");
        }
        else if (oneWin == twoWin){
            printf("TIE\n");
        }
        else{
            printf("Player 2\n");
        }
    }
    return 0;
}
