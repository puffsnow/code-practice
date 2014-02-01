#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct card{
    char num[2];
    char suit;
};


int main()
{
    char input[200];
    int begin,cardNum;
    int i,j,k,l;
    int com[2];
    struct card player[4][13];
    struct card temp;
    
    while(gets(input)){
        if (input[0] == '#'){
            break;
        }
        switch (input[0]){
            case 'E':
                begin = 0;
                break;
            case 'S':
                begin = 1;
                break;
            case 'W':
                begin = 2;
                break;
            case 'N':
                begin = 3;
                break;
        }
        gets(input);
        gets(input+52);
        
        cardNum = 0;
        j=0;
        
        for (i=0;i<52;i++){
            player[begin][cardNum].suit = input[j++];
            player[begin][cardNum].num[0] = input[j++];
            player[begin][cardNum].num[1] = '\0';
            begin++;
            if (begin == 4){
                begin = 0;
            }
            if (i % 4 == 3){
                cardNum++;
            }
        }
        
        
        for (i=0;i<4;i++){
            for (j=0;j<12;j++){
                for (k=0;k<12;k++){
                    for (l=0;l<2;l++){
                        switch(player[i][k+l].suit){
                            case 'C':
                                com[l] = 0;
                                break;
                            case 'D':
                                com[l] = 1;
                                break;
                            case 'S':
                                com[l] = 2;
                                break;
                            case 'H':
                                com[l] = 3;
                                break;
                        }
                    }
                    if (com[0] == com[1]){
                        for (l=0;l<2;l++){
                            switch(player[i][k+l].num[0]){
                                case 'T':
                                    com[l] = 10;
                                    break;
                                case 'J':
                                    com[l] = 11;
                                    break;
                                case 'Q':
                                    com[l] = 12;
                                    break;
                                case 'K':
                                    com[l] = 13;
                                    break;
                                case 'A':
                                    com[l] = 14;
                                    break;
                                default:
                                    sscanf(player[i][k+l].num,"%d",&com[l]);
                                    break;
                            }
                        }
                    }
                    if (com[0] > com[1]){
                        temp.suit = player[i][k].suit;
                        strcpy(temp.num,player[i][k].num);
                        player[i][k].suit = player[i][k+1].suit;
                        strcpy(player[i][k].num,player[i][k+1].num);
                        player[i][k+1].suit = temp.suit;
                        strcpy(player[i][k+1].num,temp.num);
                    }
                }
            }
            switch (i){
                case 0:
                    printf("S: ");
                    break;
                case 1:
                    printf("W: ");
                    break;
                case 2:
                    printf("N: ");
                    break;
                case 3:
                    printf("E: ");
                    break;    
            }
            for (j=0;j<13;j++){
                printf("%c%s",player[i][j].suit,player[i][j].num);
                if (j != 12){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }    
    return 0;
}
