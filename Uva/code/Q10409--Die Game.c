#include <stdio.h>
#include <stdlib.h>

void mo(int *forward,int *up,int *back,int *down){
    int *save;
    save = forward;
    forward = down;
    down = back;
    back = up;
    up = save;
}

int main()
{
    int steps;
    int i,j=0;
    int up,down,north,west,south,east;
    int save;
    int answer[50000];
    char to[10];
    while (scanf("%d",&steps)){
        if (steps == 0){
            break;
        }
        up = 1;
        north = 2;
        west = 3;
        east = 4;
        south = 5;
        down = 6;
        for (i=0;i<steps;i++){
            scanf("%s",to);
            if (strcmp(to,"north") == 0){
                save = down;
                down = north;
                north = up;
                up = south;
                south = save;
            }
            else if (strcmp(to,"south") == 0){
                save = down;
                down = south;
                south = up;
                up = north;
                north = save;
            }
            else if (strcmp(to,"west") == 0){
                save = down;
                down = west;
                west = up;
                up = east;
                east = save;
            }
            else{
                save = down;
                down = east;
                east = up;
                up = west;
                west = save;
            }
        }
        answer[j++] = up;
    }
    for (i=0;i<j;i++){
        printf("%d\n",answer[i]);
    }
    system("pause");
    return 0;
}


