#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){

    int count_up[26];
    int count_low[26];
    int max_count = 0;

    int i;

    char c;

    for(i=0; i<26; i++){
        count_up[i] = 0;
        count_low[i] = 0;
    }

    while(1){

        if((c = getchar()) == EOF){
            break;
        }

        else if (c == '\n'){
            for(i=0; i<26; i++){
                if(count_up[i] == max_count){
                    putchar(i+65);
                }
            }

            for(i=0; i<26; i++){
                if(count_low[i] == max_count){
                    putchar(i+97);
                }
            }

            printf(" %d\n", max_count);

            for(i=0; i<26; i++){
                count_up[i] = 0;
                count_low[i] = 0;
            }
            max_count = 0;

        }

        else if (isupper(c)){
            if(++count_up[c - 65] > max_count){
                max_count = count_up[c - 65];
            }
        }

        else if (islower(c)){
            if(++count_low[c - 97] > max_count){
                max_count = count_low[c - 97];
            }
        }

    }

    return 0;
}
