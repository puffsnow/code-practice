#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char input[2000];
    int total;
    int correct_count;

    int i;

    while(1){

        gets(input);

        if(input[0] == '*'){
            break;
        }

        correct_count = 0;

        for(i=1; input[i] != '\0'; i++){
            total = 0;
            for(;input[i] != '/'; i++){
                switch(input[i]){
                    case 'W':
                        total += 64;
                        break;
                    case 'H':
                        total += 32;
                        break;
                    case 'Q':
                        total += 16;
                        break;
                    case 'E':
                        total += 8;
                        break;
                    case 'S':
                        total += 4;
                        break;
                    case 'T':
                        total += 2;
                        break;
                    case 'X':
                        total += 1;
                        break;
                }
            }

            if(total == 64){
                correct_count++;
            }
        }

        printf("%d\n", correct_count);

    }


    return 0;

}
