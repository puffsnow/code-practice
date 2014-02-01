#include <stdio.h>
#include <stdlib.h>

char input[100];
char map[105][105];

int height, width;

void clean(int y, int x){

    if(map[y][x] != 'W'){
        return;
    }

    map[y][x] = '.';

    if(x > 0){
        clean(y, x - 1);
        if(y > 0){
            clean(y - 1, x - 1);
        }
        if(y < height - 1){
            clean(y + 1, x - 1);
        }
    }

    if(y > 0){
        clean(y - 1, x);
    }

    if(y < height - 1){
        clean(y + 1, x);
    }

    if(x < width - 1){
        clean(y, x + 1);
        if(y > 0){
            clean(y - 1, x + 1);
        }
        if(y < height - 1){
            clean(y + 1, x + 1);
        }
    }

}

int main(int argc, char *argv[]){

    int i, j;

    int count = 0;

    gets(input);

    sscanf(input, "%d%d", &height, &width);

    for(i=0; i<height; i++){
        gets(map[i]);
    }

    for(i=0; i<height; i++){
        for(j=0; j<width; j++){
            if(map[i][j] == 'W'){
                count++;
                clean(i, j);
            }
        }
    }

    printf("%d\n", count);

    return 0;

}
