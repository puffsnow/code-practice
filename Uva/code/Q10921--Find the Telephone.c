#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]){

    char input[200];
    char output[200];
    char num[26] = "22233344455566677778889999";

    int i;

    while(gets(input) != NULL){

        for(i=0; input[i] != '\0'; i++){
            if(isalpha(input[i])){
                output[i] = num[input[i] - 65];
            }
            else{
                output[i] = input[i];
            }
        }

        output[i] = '\0';

        printf("%s\n", output);

    }

    return 0;

}
