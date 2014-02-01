#include <stdio.h>
#include <stdlib.h>

int count[11];

long long int find_max(){

    long long int i, j, ans;
    char output[100];

    int out_len = 0;

    for(i=9; i>=0; i--){
        for(j=0; j<count[i]; j++){
            output[out_len++] = i + 48;
        }
    }

    output[out_len] = '\0';

    sscanf(output, "%lld", &ans);

    return ans;

}

long long int find_min(){

    long long int i, j, ans;
    char output[100];

    int out_len = 0;

    for(i=1; i<10; i++){
        if(count[i] > 0){
            count[i]--;
            output[out_len++] = i + 48;
            break;
        }
    }

    for(i=0; i<10; i++){
        for(j=0; j<count[i]; j++){
            output[out_len++] = i + 48;
        }
    }

    output[out_len] = '\0';

    sscanf(output, "%lld", &ans);

    return ans;

}

int main(int argc, char *argv[]){

    char input[100];

    long long int max, min, ori;

    int i;

    while(gets(input) != NULL){

        sscanf(input, "%lld", &ori);

        for(i=0; i<10; i++){
            count[i] = 0;
        }

        for(i=0; input[i]!='\0'; i++){
            count[input[i] - 48]++;
        }

        max = find_max();
        min = find_min();

        printf("%lld - %lld = %lld = 9 * %lld\n", max, min, max-min, (max-min) / 9);

    }

    return 0;
}
