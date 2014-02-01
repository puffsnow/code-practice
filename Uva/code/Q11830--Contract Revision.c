#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char c;

    char input[500];
    char output[500];
    char loss;

    int i, count;

    while(1){

        loss = getchar();

        getchar();

        i = 0;
        count = 0;

        while((c = getchar()) != EOF && c != '\n'){
                input[i++] = c;
        }

        input[i] = '\0';

        if(loss == '0' && strcmp(input, "0") == 0){
            break;
        }

        for(i=0; input[i] != '\0'; i++){
            if(input[i] != loss){
                output[count++] = input[i];
            }
        }

        output[count] = '\0';

        for(i=0; i<count; i++){
            if(output[i] != '0'){
                break;
            }
        }

        if(output[i] == '\0'){
            printf("0\n");
        }

        else{
            for(;i<count;i++){
                putchar(output[i]);
            }
            putchar('\n');
        }

    }


    return 0;

}
