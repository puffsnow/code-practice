#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    char input[100];

    long long int temp[30001];
    int cents[4] = {5, 10, 25, 50};

    int change;
    int i, j;

    for(i=0; i<30001; i++){
        temp[i] = 1;
    }

    for(i=0; i<4; i++){
        for(j=cents[i]; j<30001; j++){
            temp[j] += temp[j-cents[i]];
        }

    }


    while(gets(input) != NULL){

        sscanf(input, "%d", &change);

        if(temp[change] > 1){
            printf("There are %lld ways to produce %d cents change.\n", temp[change], change);
        }

        else{
            printf("There is only 1 way to produce %d cents change.\n", change);
        }

    }

    return 0;

}
