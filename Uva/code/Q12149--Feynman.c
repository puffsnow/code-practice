#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    int length;
    int i;
    int total;

    while(1){

        total = 0;

        scanf("%d", &length);

        if(length == 0){
            break;
        }

        for(i=1; i<=length; i++){
            total += i * i;
        }

        printf("%d\n", total);

    }

    return 0;
}
