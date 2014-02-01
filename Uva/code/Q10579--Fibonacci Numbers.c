#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int fib[5100][200] = {0};
    int digit[5100] = {0};

    char input[100];
    int num;

    int i, j;

    fib[0][0] = 1;
    digit[0] = 1;
    fib[1][0] = 1;
    digit[1] = 1;

    for(i=2; i<5100; i++){
        for(j=0; j<digit[i-1]; j++){
            fib[i][j] += fib[i-1][j] + fib[i-2][j];

            if(fib[i][j] >= 100000000){
                fib[i][j+1] += fib[i][j] / 100000000;
                fib[i][j] = fib[i][j] % 100000000;

                if(j == digit[i-1] - 1){
                    digit[i] = digit[i-1] + 1;
                }

            }
        }

        if(digit[i] == 0){
            digit[i] = digit[i-1];
        }

    }

    while(gets(input) != NULL){
        sscanf(input, "%d", &num);
        printf("%d", fib[num-1][digit[num-1]-1]);

        for(i=digit[num-1] - 2; i>=0; i--){
            printf("%08d", fib[num-1][i]);
        }
        printf("\n");

    }

    return 0;

}
