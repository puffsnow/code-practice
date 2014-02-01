#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int prime[1000];
    int prime_squ[1000];
    int prime_count = 0;

    int i, j;
    int input, input_save, ans;

    prime[0] = 2;
    prime_squ[0] = 4;
    prime_count++;

    for(i=3; i<1000; i++){
        for(j=0; j<prime_count; j++){
            if(i % prime[j] == 0){
                break;
            }
            if(j == prime_count - 1){
                prime[prime_count] = i;
                prime_squ[prime_count++] = i * i;
                break;
            }
        }
    }

    while(1){

        scanf("%d", &input);
        if(input == 0){
            break;
        }

        ans = 0;
        input_save = input;

        for(i=0; i<prime_count; i++){
            if(input % prime[i] == 0){
                ans++;
                do{
                    input /= prime[i];
                }while(input % prime[i] == 0);
            }
            if(input < prime[i] || i == prime_count - 1){
                if(input != 1){
                    ans++;
                }
                break;
            }
        }

        printf("%d : %d\n", input_save, ans);

    }

    return 0;

}
