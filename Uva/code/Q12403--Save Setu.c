#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

    char input[500];
    char sub[100];
    int ope_count;
    int total;
    int add;

    int i;

    total = 0;

    gets(input);

    sscanf(input, "%d", &ope_count);


    for(i=0; i<ope_count; i++){

        gets(input);

        if(strstr(input, "report") != 0){
            printf("%d\n",total);
        }

        else{
            strcpy(sub, input+7);
            sscanf(sub, "%d", &add);
            total+=add;
        }

    }


    return 0;
}
