#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char input[1000];

    char word[10][100] = {"#", "HELLO", "HOLA", "HALLO" ,"BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
    char country[10][100] = {" ", "ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};

    int i, j;


    for(i=1;; i++){

        gets(input);

        if(strcmp(input, word[0]) == 0){
            break;
        }

        for(j=1; j<7; j++){
            if(strcmp(input, word[j]) == 0){
                printf("Case %d: %s\n", i, country[j]);
                break;
            }
            if(j == 6){
                printf("Case %d: UNKNOWN\n", i);
                break;
            }
        }

    }


    return 0;

}
