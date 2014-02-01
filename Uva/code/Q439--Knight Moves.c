#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char input[10];
    char board[9][9];

    int i, j;
    int steps;

    while(gets(input) != NULL){
        for(i=0; i<9; i++){
            for(j=0; j<9; j++){
                board[i][j] = 0;
            }
        }

        board[input[0]-97][input[1]-49] = 1;

        for(steps=0;; steps++){

            if(board[input[3]-97][input[4]-49] == 1){
                break;
            }

            for(i=0; i<8; i++){
                for(j=0; j<8; j++){
                    if(board[i][j] == 1){
                        if(i+1<8 && j+2<8 && board[i+1][j+2] == 0){
                            board[i+1][j+2] = 2;
                        }
                        if(i+2<8 && j+1<8 && board[i+2][j+1] == 0){
                            board[i+2][j+1] = 2;
                        }
                        if(i+1<8 && j-2>=0 && board[i+1][j-2] == 0){
                            board[i+1][j-2] = 2;
                        }
                        if(i+2<8 && j-1>=0 && board[i+2][j-1] == 0){
                            board[i+2][j-1] = 2;
                        }
                        if(i-1>=0 && j-2>=0 && board[i-1][j-2] == 0){
                            board[i-1][j-2] = 2;
                        }
                        if(i-2>=0 && j-1>=0 && board[i-2][j-1] == 0){
                            board[i-2][j-1] = 2;
                        }
                        if(i-1>=0 && j+2<8 && board[i-1][j+2] == 0){
                            board[i-1][j+2] = 2;
                        }
                        if(i-2>=0 && j+1<8 && board[i-2][j+1] == 0){
                            board[i-2][j+1] = 2;
                        }
                        board[i][j] = 3;
                    }
                }
            }

            for(i=0; i<8; i++){
                for(j=0; j<8; j++){
                    if(board[i][j] == 2){
                        board[i][j] = 1;
                    }
                }
            }
        }
        printf("To get from %c%c to %c%c takes %d knight moves.\n", input[0], input[1], input[3], input[4], steps);
    }



    return 0;

}
