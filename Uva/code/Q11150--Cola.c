#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


    char input[100];

    int num;
    int count;

    while(gets(input)!=NULL){

        sscanf(input, "%d", &num);
        count = num;

        while(num > 2){
            count += num / 3;
            num = num / 3 + num % 3;
        }

        if(num == 2){
            count++;
        }

        printf("%d\n", count);

    }


    return 0;

}
