#include <stdio.h>
#include <stdlib.h>

int prime[1000] = {2};
int prime_count = 1;


int prime_test(int x){

    int i;

    for(i=0; i<prime_count; i++){
        if(x % prime[i] == 0){
            return -1;
        }
    }

    return 1;

}

int main(int argc, char *argv[]){


    char input[300];
    int sum;

    int i;


    for(i=3; i<1040; i++){
        if(prime_test(i) == 1){
            prime[prime_count++] = i;
        }
    }

    while(gets(input) != NULL){

        sum = 0;

        for(i=0; input[i] != '\0'; i++){
            if(input[i] > 96){
                sum += (input[i] - 96);
            }

            else{
                sum += (input[i] - 38);
            }
        }

        for(i=0; i<prime_count; i++){
            if(sum % prime[i] == 0 && sum != prime[i]){
                printf("It is not a prime word.\n");
                break;
            }

            if(i == prime_count - 1 || sum == prime[i]){
                printf("It is a prime word.\n");
                break;
            }
        }

    }


    return 0;

}
