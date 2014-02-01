#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void re(char *input){
    int len = strlen(input);
    int i, j;
    char copyIn[10000];

    for(i=0; i<len; i++){
        copyIn[i] = input[len-i-1];
    }
    copyIn[len] = '\0';
    strcpy(input, copyIn);

    return;
}

void intToC(char *input, char *output){
    int i, j;
    int len = strlen(input);
    int output_count = 0;

    char temp[4];

    re(input);
    for(i=0; i<len; i++){
        if(input[i] == '1'){
            temp[0] = input[i];
            temp[1] = input[i+1];
            temp[2] = input[i+2];
            temp[3] = '\0';
            i += 2;
        }
        else{
            temp[0] = input[i];
            temp[1] = input[i+1];
            temp[2] = '\0';
            i += 1;
        }
        output[output_count] = atoi(temp);
        output_count++;
    }
    output[output_count] = '\0';
    return;
}

void cToInt(char *input, char *output){
    int i, j;
    int len = strlen(input);

    char temp[4];
    output[0] = '\0';

    for(i=0; i<len; i++){
        sprintf(temp, "%d", input[i]);
        strcat(output, temp);
    }

    re(output);
    return;
}

int main(int argc, char *argv[]){

    char input[10000];
    char output[10000];

    while(gets(input) != NULL){
        if(isdigit(input[0])){
            intToC(input, output);
        }
        else{
            cToInt(input, output);
        }
        printf("%s\n", output);
    }



    return 0;

}
