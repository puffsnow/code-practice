#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char input[2000];
    char *delim = " ";
    char *p;

    int i, j;

    int coeff[1000];
    int coeCount;
    int x;
    int ans;

    while(gets(input) != NULL){

        coeCount = 0;
        sscanf(strtok(input,delim), "%d", &coeff[coeCount++]);

        while((p=strtok(NULL,delim))){
            sscanf(p, "%d", &coeff[coeCount++]);
        }

        gets(input);
        ans = 0;
        sscanf(strtok(input,delim), "%d", &x);

        for(i=0; i<coeCount-1; i++){
            ans += coeff[i];
            ans *= x;
        }

        ans += coeff[i];
        printf("%d", ans);

        while((p=strtok(NULL,delim))){
            sscanf(p, "%d", &x);

            ans = 0;
            for(i=0; i<coeCount-1; i++){
                ans += coeff[i];
                ans *= x;
            }
            ans += coeff[i];
            printf(" %d", ans);
        }

        printf("\n");


    }
    return 0;

}
