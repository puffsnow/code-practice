#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

    unsigned int input;

    double sqr;


    while(1){

        scanf("%u", &input);

        if(input == 0){
            break;
        }

        sqr = pow((double)input, 0.5);

        if(input == (unsigned int)sqr * (unsigned int)sqr){
            printf("yes\n");
        }

        else{
            printf("no\n");
        }

    }





    return 0;

}
