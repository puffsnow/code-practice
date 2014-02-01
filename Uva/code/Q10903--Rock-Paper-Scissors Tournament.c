#include <stdio.h>
#include <stdlib.h>

int main(){
    int player,raceNum;
    int i;
    int flag = 0;
    int first,second;
    char fShow[100],sShow[100];
    int win[200],lose[200];
    while(1){
        scanf("%d",&player);
        if (player == 0){
            break;
        }
        if (flag == 1){
            printf("\n");
        }
        scanf("%d",&raceNum);
        raceNum = raceNum*player*(player-1)/2;
        for (i=0;i<player;i++){
            win[i] = 0;
            lose[i] = 0;
        }
        for (i=0;i<raceNum;i++){
            scanf("%d%s%d%s",&first,fShow,&second,sShow);
            switch(fShow[0]){
                case 'r':
                    switch(sShow[0]){
                        case 'p':
                            win[second - 1]++;
                            lose[first - 1]++;
                            break;
                        case 's':
                            win[first - 1]++;
                            lose[second-1]++;
                            break;
                    }
                    break;
                case 'p':
                    switch(sShow[0]){
                        case 's':
                            win[second - 1]++;
                            lose[first - 1]++;
                            break;
                        case 'r':
                            win[first - 1]++;
                            lose[second-1]++;
                            break;
                    }
                    break;
                case 's':
                    switch(sShow[0]){
                        case 'r':
                            win[second-1]++;
                            lose[first-1]++;
                            break;
                        case 'p':
                            win[first-1]++;
                            lose[second-1]++;
                            break;
                    }
                    break;
            }
        }
        for (i=0;i<player;i++){
            if (win[i] == 0 && lose[i] == 0){
                printf("-\n");
            }
            else{
                printf("%.3lf\n",(double)win[i] / ((double) win[i]+ (double) lose[i]));
            }
        }
        flag = 1;
    }
    
    
    return 0;
}
