#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

    char input[10000];
    char sen[10000];

    int len, limit, flag;

    int i;

    while(1){

        gets(input);

        if(strcmp(input, "DONE") == 0){
            break;
        }

        len = 0;
        flag = 0;

        for(i=0; input[i] != '\0'; i++){
            if(isalpha(input[i])){
                sen[len++] = tolower(input[i]);
            }
        }

        sen[len] = '\0';

        limit = (len / 2) + 1;

        for(i=0; i < limit; i++){
            if(sen[i] != sen[len - i - 1]){
                printf("Uh oh..\n");
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            printf("You won't be eaten!\n");
        }

    }



    return 0;

}
