#include <stdio.h>
#include <stdlib.h>

int whiteC,blackC;

int main()
{
    int i,j,k,l,count;

    char board[8][10];
    count = 1;
    while(1){
        whiteC = 0;
        blackC = 0;
        for (i=0;i<8;i++){
            gets(board[i]);
        }
        k = 0;
        for (i=0;i<8;i++){
            for (j=0;j<8;j++){
                if (board[i][j] != '.'){
                    k = 1;
                    break;
                }
            }
            if (k == 1){
                break;
            }
        }
        if (k == 0){
            break;
        }
        
        for (i=0;i<8;i++){
            for (j=0;j<8;j++){
                if (board[i][j] == 'k'){
                    if ((i < 7 && j < 7 && board[i+1][j+1] == 'P' ) || (i < 7 && j > 0 && board[i+1][j-1] == 'P')){
                        blackC = 1;
                    }
                    for (k = i - 1,l = j; k >= 0;k--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'R' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i + 1,l = j; k < 8;k++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'R' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i,l = j - 1;l >= 0;l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'R' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i,l = j + 1; l < 8;l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'R' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i+1,l=j+1;k<8,l<8;k++,l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'B' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i+1,l=j-1;k<8,l>=0;k++,l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'B' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i-1,l=j+1;k>=0,l<8;k--,l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'B' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i-1,l=j-1;k>=0,l>=0;k--,l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'B' || board[k][l] == 'Q'){
                            blackC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    if (i>1 && ((j>0 && board[i-2][j-1] == 'N') || (j<7 && board[i-2][j+1] =='N'))){
                        blackC = 1;
                    }
                    if (i>0 && ((j>1 && board[i-1][j-2] == 'N') || (j<6 && board[i-1][j+2] =='N'))){
                        blackC = 1;
                    }
                    if (i<7 && ((j>1 && board[i+1][j-2] == 'N') || (j<6 && board[i+1][j+2] =='N'))){
                        blackC = 1;
                    }
                    if (i<6 && ((j>0 && board[i+2][j-1] == 'N') || (j<7 && board[i+2][j+1] =='N'))){
                        blackC = 1;
                    }
                }
                
                else if (board[i][j] == 'K' && blackC == 0){
                    if ((i > 0 && j < 7 && board[i-1][j+1] == 'p' ) || (i > 0 && j > 0 && board[i-1][j-1] == 'p')){
                        whiteC = 1;
                    }
                    for (k = i - 1,l = j;k >= 0;k--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'r' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i + 1,l = j; k < 8;k++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'r' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i,l = j - 1; l >= 0;l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'r' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k = i,l = j + 1;l < 8;l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'r' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i+1,l=j+1; k<8,l<8;k++,l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'b' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i+1,l=j-1;k<8,l>=0;k++,l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'b' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i-1,l=j+1;k>=0,l<8;k--,l++){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'b' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    for (k=i-1,l=j-1;k>=0,l>=0;k--,l--){
                        if (board[k][l] == '.'){
                        }
                        else if (board[k][l] == 'b' || board[k][l] == 'q'){
                            whiteC = 1;
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    if (i>1 && ((j>0 && board[i-2][j-1] == 'n') || (j<7 && board[i-2][j+1] =='n'))){
                        whiteC = 1;
                    }
                    if (i>0 && ((j>1 && board[i-1][j-2] == 'n') || (j<6 && board[i-1][j+2] =='n'))){
                        whiteC = 1;
                    }
                    if (i<7 && ((j>1 && board[i+1][j-2] == 'n') || (j<6 && board[i+1][j+2] =='n'))){
                        whiteC = 1;
                    }
                    if (i<6 && ((j>0 && board[i+2][j-1] == 'n') || (j<7 && board[i+2][j+1] =='n'))){
                        whiteC = 1;
                    }
                }
            }
        }
        if (whiteC == 1){ 
            printf("Game #%d: white king is in check.\n",count);
        }
        else if (blackC == 1){
            printf("Game #%d: black king is in check.\n",count);
        }
        else{
            printf("Game #%d: no king is in check.\n",count);
        }
        count++;
        gets(board[0]);
    }
    return 0;
}
