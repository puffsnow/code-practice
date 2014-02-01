#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int bin[40];
    char input[1000];
    int case_num;
    int i, j, count;

    int S, L, len;

    bin[0] = 1;

    for(i=1; i<31; i++){
        bin[i] = bin[i-1] * 2;
    }

    gets(input);
    sscanf(input, "%d", &case_num);

    for(i=1; i<=case_num; i++){
        S = 0;
        L = 0;

        gets(input);
        len = strlen(input);

        for(j=len - 1,count = 0; j>=0; j--, count++){
            if(input[j] == '1'){
                S += bin[count];
            }
        }

        gets(input);
        len = strlen(input);

        for(j=len - 1,count = 0; j>=0; j--, count++){
            if(input[j] == '1'){
                L += bin[count];
            }
        }


        while(S > 0 && L > 0){
            if(S >= L){
                S = S % L;
            }
            else{
                L = L % S;
            }
        }


        if( S == 1 || L == 1){
            printf("Pair #%d: Love is not all you need!\n", i);
        }

        else{
            printf("Pair #%d: All you need is love!\n", i);
        }

    }

    return 0;

}
