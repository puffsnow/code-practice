#include <stdio.h>
#include <stdlib.h>

struct card{
    int num;
    char suit;
};

int main()
{
    struct card target;
    struct card pile[13][4];
    char input[200];
    char numIn[2];
    numIn[1] = '\0';
    int opened[13];
    int totalOpened;
    int i,j,temp;
    int flag = 0;
    
    while(1){
        for (i=0;i<13;i++){
            opened[i] = 0;
        }
        for (i=0;i<4;i++){
            gets(input);
            if (i==0 && input[0] == '#'){
                return 0;
            }
            for(j=0;j<13;j++){
                pile[12-j][i].suit = input[3*j+1];
                switch (input[3*j]){
                    case 'A':
                        pile[12-j][i].num = 1;
                        break;
                    case 'T':
                        pile[12-j][i].num = 10;
                        break;
                    case 'J':
                        pile[12-j][i].num = 11;
                        break;
                    case 'Q':
                        pile[12-j][i].num = 12;
                        break;
                    case 'K':
                        pile[12-j][i].num = 13;
                        break;
                    default:
                        numIn[0] = input[3*j];
                        sscanf(numIn,"%d",&pile[12-j][i].num);
                        break;
                }
            }
        }
    
        target.num = pile[12][0].num;
        target.suit = pile[12][0].suit;
        opened[12]++;
        totalOpened = 1;
        
        for (i=0;i<51;i++){
            if (opened[target.num-1] == 4){
                break;
            }
            temp = target.num-1;
            target.suit = pile[target.num-1][opened[target.num-1]].suit;
            target.num = pile[target.num-1][opened[target.num-1]].num; 
            opened[temp]++;
            totalOpened++;
        }
        
        switch (target.num){
            case 1:
                printf("%02d,A%c\n",totalOpened,target.suit);
                break;
            case 10:
                printf("%02d,T%c\n",totalOpened,target.suit);
                break;
            case 11:
                printf("%02d,J%c\n",totalOpened,target.suit);
                break;
            case 12:
                printf("%02d,Q%c\n",totalOpened,target.suit);
                break;
            case 13:
                printf("%02d,K%c\n",totalOpened,target.suit);
                break;
            default:
                printf("%02d,%d%c\n",totalOpened,target.num,target.suit);
                break;
        }      
    }
    return 0;
}
