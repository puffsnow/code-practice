#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char input[100];

    long long int S, D;
    long long int i;

    while(gets(input) != NULL){

        sscanf(input, "%lld%lld", &S, &D);

        for(i=S;;i++){
            if((i+S) * (i-S+1) / 2 >= D){
                printf("%lld\n", i);
                break;
            }
        }

    }

    return 0;

}
