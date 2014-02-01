#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){

    char input[1000];
    char output[1000];
    char di[10];
    char c;

    int di_count;
    int out_count;
    int case_num;

    int i, j, k;

    gets(input);

    sscanf(input, "%d", &case_num);

    for(i=1; i<=case_num; i++){

        gets(input);
        out_count = 0;

        for(j=0; input[j] != '\0'; j++){

            c = input[j];
            di_count = 0;

            do{
                j++;
                di[di_count++] = input[j];
            }while(isdigit(input[j+1]));

            di[di_count] = '\0';

            sscanf(di, "%d", &k);

            for(;k>0; k--){
                output[out_count++] = c;
            }

        }

        output[out_count] = '\0';

        printf("Case %d: %s\n", i, output);

    }



    return 0;

}
