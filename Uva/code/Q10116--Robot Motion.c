#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char num_input[100];

    char map[12][12];
    char step[12][12];

    int row, column, enter;

    int x, y, step_count;

    int i, j;

    while(1){

        gets(num_input);

        sscanf(num_input, "%d%d%d", &row, &column, &enter);

        if(row == 0 && column == 0 && enter == 0){
            break;
        }

        for(i=0; i<row; i++){
            gets(map[i]);
            for(j=0; map[i][j] != '\0'; j++){
                step[i][j] = 0;
            }
        }

        step_count = 1;
        x = enter - 1;
        y = 0;
        step[y][x] = step_count++;


        while(1){

            switch(map[y][x]){
                case 'N':
                    y--;
                    break;
                case 'S':
                    y++;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
            }

            if(x < 0 || x == column || y < 0 || y == row){
                printf("%d step(s) to exit\n", step_count - 1);
                break;
            }

            else if(step[y][x] != 0){
                printf("%d step(s) before a loop of %d step(s)\n", step[y][x] - 1, step_count - step[y][x]);
                break;
            }

            step[y][x] = step_count++;

        }

    }

    return 0;

}
