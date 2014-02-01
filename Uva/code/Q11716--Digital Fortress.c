#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

    char input[15000];
    char output[15000];

    int case_num;
    int len, len_sqrt;

    int i, j, k;

    gets(input);
    sscanf(input, "%d", &case_num);

    for(i=0; i<case_num; i++){

        gets(input);

        len = strlen(input);

        len_sqrt = (int)sqrt((double)len);

        if(len != len_sqrt*len_sqrt){
            printf("INVALID\n");
            continue;
        }

        for(j=0; j<len_sqrt; j++){
            for(k=0; k<len_sqrt; k++){
                output[j*len_sqrt+k] = input[k*len_sqrt+j];
            }
        }

        output[len] = '\0';

        printf("%s\n", output);

    }


    return 0;
}

