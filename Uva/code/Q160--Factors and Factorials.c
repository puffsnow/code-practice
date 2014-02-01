#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int prime[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    int data[101][26];

    int i, j, temp;

    int input;

    for(i=0; i<101; i++){
        for(j=0; j<25; j++){
            data[i][j] = 0;
        }
    }

    for(i=2; i<101; i++){

        temp = i;

        for(j=0; j<25; j++){
            data[i][j] = data[i-1][j];
            while(temp % prime[j] == 0){
                data[i][j]++;
                temp = temp / prime[j];
            }
        }

    }

    while(1){

        scanf("%d", &input);

        if(input == 0){
            break;
        }

        printf("%3d! =", input);

        for(i=0; i<25; i++){

            if(data[input][i] == 0){
                break;
            }

            if(i == 15){
                printf("\n      ");
            }

            printf("%3d", data[input][i]);
        }

        printf("\n");

    }

    return 0;

}
