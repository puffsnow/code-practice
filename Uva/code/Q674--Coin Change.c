#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

    char input[100];

    int temp[7490];
    int cents[4] = {5, 10, 25, 50};

    int change;
    int i, j;

    for(i=0; i<7490; i++){
        temp[i] = 1;
    }

    for(i=0; i<4; i++){
        for(j=cents[i]; j<7490; j++){
            temp[j] += temp[j-cents[i]];
        }

    }


    while(gets(input) != NULL){

        sscanf(input, "%d", &change);

        printf("%d\n", temp[change]);

    }

    return 0;

}
