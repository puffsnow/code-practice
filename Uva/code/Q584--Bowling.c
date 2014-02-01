#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(int agrc, char *argv[]){

    char input[1000];
    int i;
    int total_score;
    
    int frame;
    
    int last_ball;
    int if_second;
    
    int spec[20];
    int score[20];
    
    while(1){
        gets(input);
        
        if(strcmp(input, "Game Over") == 0){
            break;
        }
        
        total_score = 0;
        frame = 0;
        if_second = 0;
        
        for(i=0;i<20;i++){
            spec[i] = 0;
            score[i] = 0;
        }
        
        for(i=0;;i++){
            if (input[i] == '\0'){
                break;
            }
            
            if (isdigit(input[i])){
                score[frame] += input[i] - 48;
                
                if (i > 1 && spec[frame - 1] > 0){
                    spec[frame - 1]--;
                    score[frame - 1] += (input[i] - 48);
                }
                
                if (i > 2 && spec[frame - 2] > 0){
                    spec[frame - 2]--;
                    score[frame - 2] += (input[i] - 48);
                }
                
                if (if_second == 0){
                    last_ball = input[i] - 48;
                    if_second = 1;
                }
                else{
                    frame++;
                    if_second = 0;
                }
                
                
            }
            
            else if (input[i] == '/'){
                spec[frame] = 1;
                score[frame] = 10;

                if (i > 2 && spec[frame - 2] > 0){
                    spec[frame - 2]--;
                    score[frame - 2] += (10 - last_ball);
                }
                
                if (i > 1 && spec[frame - 1] > 0){
                    spec[frame - 1]--;
                    score[frame - 1] += (10 - last_ball);
                }
                
                
                frame++;
                if_second = 0;
            }
            
            else if (input[i] == 'X'){
                spec[frame] = 2;
                score[frame] = 10;
                if (i > 2 && spec[frame - 2] > 0){
                    spec[frame - 2]--;
                    score[frame - 2] += 10;
                }
                if (i > 1 && spec[frame - 1] > 0){
                    spec[frame - 1]--;
                    score[frame - 1] += 10;
                }
                

                
                frame++;
                if_second = 0;
            }
            
            
        }
        
        for(i=0;i<10;i++){
            total_score += score[i];
        }
        
        printf("%d\n", total_score);
        
    }


    return 0;

}
