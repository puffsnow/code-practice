#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int i, len;
    int digit, ten;
    char total[1000] = "0";
    char input[1000];
    char summand[1000];

    while(1){

        ten = 0;
        digit = 0;

        gets(input);

        if(strcmp("0", input) == 0){
            break;
        }

        len = strlen(input);

        for(i=0; i<len; i++){
            summand[len - i - 1] = input[i];
        }

        summand[len] = '\0';

        for(i=0;; i++){

            if(i >= len && ten == 0){
                break;
            }

            if(total[i] == '\0'){
                total[i] = '0';
                total[i+1] = '\0';
            }

            if(i < len){
                digit = (summand[i] - 48) + (total[i] - 48) + ten;
            }

            else{
                digit = (total[i] - 48) + ten;
            }

            if(digit > 9){
                ten = 1;
                digit = digit % 10;
            }

            else{
                ten = 0;
            }

            total[i] = digit + 48;

        }

    }

    for(i=strlen(total)-1; i>=0; i--){
        putchar(total[i]);
    }

    putchar('\n');

    return 0;

}
