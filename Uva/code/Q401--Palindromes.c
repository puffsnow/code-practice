#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char alpha_retable[100] = "A   3  HIL JM O   2TUVWXY5";
char digit_retable[100] = "1SE Z  8 ";

int mirror(char a, char b){

    if(isupper(a)){
        if(alpha_retable[a - 65] == b)
            return 1;
        return 0;
    }

    if(isdigit(a)){
        if(digit_retable[a - 49] == b)
            return 1;
        return 0;
    }

}

int main(int argc, char *argv[]){

    char input[1000];
    int i;
    int len;
    int mirror_flag;
    int palind_flag;

    while(1){

        mirror_flag = 1;
        palind_flag = 1;

        if(gets(input) == NULL){
            break;
        }

        len = strlen(input);

        for(i=0; i<=len/2+1; i++){
            if(input[i] != input[len - i - 1]){
                palind_flag = 0;
            }
            if(mirror(input[i], input[len - i - 1]) == 0){
                mirror_flag = 0;
            }

        }

        if(mirror_flag == 0 && palind_flag == 0){
            printf("%s -- is not a palindrome.\n\n", input);
        }

        else if(mirror_flag == 1 && palind_flag == 0){
            printf("%s -- is a mirrored string.\n\n", input);
        }

        else if(mirror_flag == 0 && palind_flag == 1){
            printf("%s -- is a regular palindrome.\n\n", input);
        }

        else{
            printf("%s -- is a mirrored palindrome.\n\n", input);
        }
    }


    return 0;

}
