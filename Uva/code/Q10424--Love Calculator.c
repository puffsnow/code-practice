#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){

    char first[200];
    char second[200];

    int count_f, count_s;

    int i;

    while(gets(first)!=NULL){

        gets(second);

        count_f = 0;
        count_s = 0;

        for(i=0; first[i] != '\0'; i++){
            if(isalpha(first[i])){
                count_f += tolower(first[i]) - 96;
            }
        }

        for(i=0; second[i] != '\0'; i++){
            if(isalpha(second[i])){
                count_s += tolower(second[i]) - 96;
            }
        }

        while(count_f >= 10){
            sprintf(first, "%d", count_f);
            count_f = 0;
            for(i=0; first[i] != '\0'; i++){
                count_f += first[i] - 48;
            }
        }

        while(count_s >= 10){
            sprintf(second, "%d", count_s);
            count_s = 0;
            for(i=0; second[i] != '\0'; i++){
                count_s += second[i] - 48;
            }
        }

        if(count_f > count_s){
            printf("%.2lf %%\n", (double)count_s / (double)count_f * 100);
        }

        else{
            printf("%.2lf %%\n", (double)count_f / (double)count_s * 100);
        }

    }



    return 0;

}
