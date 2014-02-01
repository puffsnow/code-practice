#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char input[500];

    int case_num;
    int count, len;

    int i, j;

    gets(input);

    sscanf(input, "%d", &case_num);

    for(i=1; i<=case_num; i++){

        gets(input);
        gets(input);

        count = 0;

        len = strlen(input);

        for(j=0; j<len; j++){
            if(input[j] == '.'){
                count++;
                j = j + 2;
            }

        }

        printf("Case %d: %d\n", i, count);

    }



    return 0;

}
