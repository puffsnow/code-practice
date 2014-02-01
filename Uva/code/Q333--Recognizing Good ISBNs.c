#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]){

    char input[100];

    char output[100];
    int output_count;

    int i;
    int num[10];
    int total;

    int count;
    int len;

    int flag;

    while(1){

        if(gets(input) == NULL){
            break;
        }

        count = 0;
        flag = 0;
        total = 0;
        output_count = 0;
        len = strlen(input);



        for(i=len; i>0; i--){
            if(input[i-1] != ' '){
                input[i] = '\0';
                break;
            }
            len--;
        }

        for(i=0; i<len; i++){
            if(input[i] != ' '){
                break;
            }
        }

        for(i=i; i<len; i++){

            if(isdigit(input[i]) && count < 10){
                num[count++] = input[i] - 48;
            }

            else if(input[i] == 'X' && count == 9){
                num[count++] = 10;
            }

            else if(input[i] == '-'){

            }

            else{
                flag = 1;
            }

            output[output_count++] = input[i];

        }

        output[output_count] = '\0';

        if(flag == 1 || count != 10){
            printf("%s is incorrect.\n", output);
            continue;
        }

        for(i=1; i<10; i++){
            num[i] = num[i] + num[i-1];
        }

        for(i=1; i<10; i++){
            num[i] = num[i] + num[i-1];
        }

        if(num[9] % 11 == 0){
            printf("%s is correct.\n", output);
        }

        else{
            printf("%s is incorrect.\n", output);
        }

    }


    return 0;

}
