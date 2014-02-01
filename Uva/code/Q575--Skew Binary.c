#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char *argv[]){

    char input[200];
    int len;
    int ans;

    int pow[32];

    int i;

    pow[0] = 1;

    for(i=1; i<32; i++){
        pow[i] = pow[i-1] * 2;
    }

    while(1){
        gets(input);

        if(strcmp(input, "0") == 0){
            break;
        }

        ans = 0;

        len = strlen(input);

        for(i=1; i<=len; i++){
            if(input[len-i] != '0'){
                ans += (input[len-i] - 48) * (pow[i] - 1);
            }
        }

        printf("%d\n", ans);

    }




    return 0;

}
