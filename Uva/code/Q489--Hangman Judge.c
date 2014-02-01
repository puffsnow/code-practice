#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int round;
    int charMark[100];
    int charMarkCount;
    int hangman;
    char roundInput[200];
    char sol[1000];
    char gues[1000];
    int solLen, guesLen;

    int i, j;

    while(1){
        gets(roundInput);
        sscanf(roundInput, "%d", &round);

        if(round == -1){
            break;
        }

        for(i=0; i<27; i++){
            charMark[i] = 0;
        }
        charMarkCount = 0;
        hangman = 0;

        gets(sol);
        gets(gues);

        solLen = strlen(sol);
        guesLen = strlen(gues);

        for(i=0; i<solLen; i++){
            if(charMark[sol[i]-97] == 0){
                charMark[sol[i]-97] = 1;
                charMarkCount++;
            }
        }

        for(i=0; i<guesLen; i++){
            if(charMark[gues[i]-97] == 0){
                charMark[gues[i]-97] = 2;
                hangman++;
            }
            else if(charMark[gues[i]-97] == 1){
                charMark[gues[i]-97] = 2;
                charMarkCount--;
            }

            else{
                continue;
            }

            if(hangman == 7 || charMarkCount == 0){
                break;
            }
        }

        printf("Round %d\n", round);

        if(hangman == 7){
            printf("You lose.\n");
        }

        else if(charMarkCount == 0){
            printf("You win.\n");
        }

        else{
            printf("You chickened out.\n");
        }
    }

    return 0;
}
