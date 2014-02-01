#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char input[100];

    long long int temp[7000];
    int cents[10] = {2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};

    double change_in;
    int change;

    int i, j;

    for(i=0; i<7000; i++){
        temp[i] = 1;
    }

    for(i=0; i<10; i++){
        for(j=cents[i]; j<7000; j++){
            temp[j] += temp[j-cents[i]];
        }
    }


    while(1){

        scanf("%lf", &change_in);

        change = (int)(change_in * 20);

        if(change == 0){
            break;
        }

        printf("%6.2lf%17lld\n",change_in, temp[change]);


    }

    return 0;

}
