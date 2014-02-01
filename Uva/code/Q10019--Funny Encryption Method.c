#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num, input, dec;
    int i, j;
    int dec_count, hex_count;

    int one = 1;

    char in[100];

    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){

        dec_count = 0;
        hex_count = 0;

        scanf("%d", &input);
        sprintf(in, "%d", input);

        while(input > 0){
            if(input & one > 0){
                dec_count++;
            }
            input = input >> 1;
        }

        for(j=0; in[j] != '\0'; j++){
            in[j] = in[j] - 48;
            while(in[j] > 0){
                if(in[j] & one > 0){
                    hex_count++;
                }
                in[j] = in[j] >> 1;
            }
        }

        printf("%d %d\n", dec_count, hex_count);

    }

    return 0;

}
