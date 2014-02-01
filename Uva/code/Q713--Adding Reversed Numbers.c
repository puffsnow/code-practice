#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int i, j;

    int caseNum;
    int firLen, secLen, maxLen;
    int a, b, carry;
    unsigned char input[1000];
    unsigned char first[1000];
    unsigned char second[1000];
    unsigned char output[1000];
    char *delim = " ";

    gets(input);
    sscanf(input, "%d", &caseNum);

    for(i=0; i<caseNum; i++){
        for(j=0; j<1000; j++){
            first[j] = 255;
            second[j] = 255;
            output[j] = 255;
        }
        carry = 0;

        gets(input);

        strcpy(first, strtok(input, delim));
        strcpy(second, strtok(NULL, delim));

        firLen = strlen(first);
        secLen = strlen(second);

        if(firLen >= secLen){
            maxLen = firLen;
        }
        else{
            maxLen = secLen;
        }

        for(j=0; j<maxLen; j++){

            if(first[j] == 255 || first[j] == 0){
                first[j] = 48;
            }
            if(second[j] == 255 || second[j] == 0){
                second[j] = 48;
            }

            output[j] = first[j] - 48 + second[j] + carry;

            if(output[j] > 57){
                carry = 1;
                output[j] -= 10;
            }
            else{
                carry = 0;
            }

            if(j == maxLen - 1){
                if(carry == 0){
                    output[maxLen] = 0;
                }
                else{
                    output[maxLen+1] = 0;
                    output[maxLen] = 49;
                }
            }
        }

        for(j=0; output[j] == '0'; j++){
            if(output[j+1] == '\0'){
                printf("0");
            }
        }

        printf("%s\n", output + j);

    }



    return 0;

}
