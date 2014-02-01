#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    char input[100];

    int po;

    char num[100];

    int total;

    int i, j, k, count;

    gets(input);
    sscanf(input,"%d",&case_num);

    num[16] = '\0';

    for(i=0; i<case_num; i++){

        gets(input);
        count = 0;
        total = 0;

        for(j=0; j<19; j++){
            if(input[j] != ' '){
                num[count++] = input[j];
            }
        }


        for(j=0; j<8; j++){
            po = (num[2*j] - 48) * 2;
            while(po != 0){
                total += po % 10;
                po = po / 10;
            }
        }


        for(j=0; j<8; j++){
            total += num[2*j+1] - 48;
        }

        if(total % 10 == 0){
            printf("Valid\n");
        }

        else{
            printf("Invalid\n");
        }

    }

    return 0;
}
