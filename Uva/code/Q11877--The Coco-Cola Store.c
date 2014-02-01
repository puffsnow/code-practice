#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int bottle;
    int count;


    while(1){

        count = 0;
        scanf("%d", &bottle);

        if(bottle == 0){
            break;
        }

        while(bottle >= 3){

            count += bottle / 3;
            bottle = bottle % 3 + bottle / 3;

        }

        if(bottle == 2){
            count++;
        }

        printf("%d\n", count);

    }

    return 0;

}
