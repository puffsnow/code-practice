#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char input[1000];
    char first;

    int flag = 0;

    int i;

    while(1){

        gets(input);

        if(input[0] == '*'){
            break;
        }

        first = tolower(input[0]);
        flag = 0;

        for(i=0; input[i] != '\0'; i++){
            if(input[i] == ' ' && tolower(input[i+1]) != first){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            printf("N\n");
        }

        else{
            printf("Y\n");
        }

    }

    return 0;

}
