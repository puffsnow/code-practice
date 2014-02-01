#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char input[100];
    int case_num;

    int count;

    int i;

    gets(input);

    sscanf(input, "%d", &case_num);

    for(i=0; i<case_num; i++){
        count = 0;

        gets(input);

        if(strlen(input) > 3){
            printf("3\n");
            continue;
        }

        switch(input[0]){
            case 'o':
                count++;
                break;
            case 't':
                count--;
                break;
        }

        switch(input[1]){
            case 'n':
                count++;
                break;
            case 'w':
                count--;
                break;
        }

        switch(input[2]){
            case 'e':
                count++;
                break;
            case 'o':
                count--;
                break;
        }

        if(count > 0){
            printf("1\n");
        }

        else{
            printf("2\n");
        }

    }


    return 0;

}
