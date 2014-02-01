#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num;
    int len;

    char num_str[20];
    char output[1000];

    int output_len;

    int i, j, k;

    while(1){

        scanf("%d%d", &len, &num);

        if(len == 0 && num == 0){
            break;
        }

        sprintf(num_str, "%d", num);

        output_len = 0;

        for(i=0; ; i++){

            output[output_len++] = ' ';

            if(num_str[i] == '1' || num_str[i] == '4'){
                for(j=0; j<len; j++){
                    output[output_len++] = ' ';
                }
            }

            else{
                for(j=0; j<len; j++){
                    output[output_len++] = '-';
                }
            }

            output[output_len++] = ' ';

            if(num_str[i+1] == '\0'){
                output[output_len] = '\0';
                printf("%s\n", output);
                break;
            }

            output[output_len++] = ' ';

        }

        for(i=0; i<len; i++){

            output_len = 0;

            for(j=0; ; j++){

                if(num_str[j] == '1' || num_str[j] == '2' || num_str[j] == '3' || num_str[j] == '7'){
                    output[output_len++] = ' ';
                }

                else{
                    output[output_len++] = '|';
                }

                for(k=0; k<len; k++){
                    output[output_len++] = ' ';
                }

                if(num_str[j] == '5' || num_str[j] == '6'){
                    output[output_len++] = ' ';
                }

                else{
                    output[output_len++] = '|';
                }


                if(num_str[j+1] == '\0'){
                    output[output_len] = '\0';
                    printf("%s\n", output);
                    break;
                }

                output[output_len++] = ' ';

            }

        }

        output_len = 0;

        for(i=0; ; i++){

            output[output_len++] = ' ';

            if(num_str[i] == '1' || num_str[i] == '7' || num_str[i] == '0'){
                for(j=0; j<len; j++){
                    output[output_len++] = ' ';
                }
            }

            else{
                for(j=0; j<len; j++){
                    output[output_len++] = '-';
                }
            }

            output[output_len++] = ' ';

            if(num_str[i+1] == '\0'){
                output[output_len] = '\0';
                printf("%s\n", output);
                break;
            }

            output[output_len++] = ' ';

        }

        for(i=0; i<len; i++){

            output_len = 0;

            for(j=0; ; j++){

                if(num_str[j] == '2' || num_str[j] == '6' || num_str[j] == '8' || num_str[j] == '0'){
                    output[output_len++] = '|';
                }

                else{
                    output[output_len++] = ' ';
                }

                for(k=0; k<len; k++){
                    output[output_len++] = ' ';
                }

                if(num_str[j] == '2'){
                    output[output_len++] = ' ';
                }

                else{
                    output[output_len++] = '|';
                }


                if(num_str[j+1] == '\0'){
                    output[output_len] = '\0';
                    printf("%s\n", output);
                    break;
                }

                output[output_len++] = ' ';

            }

        }

        output_len = 0;

        for(i=0; ; i++){

            output[output_len++] = ' ';

            if(num_str[i] == '1' || num_str[i] == '7' || num_str[i] == '4'){
                for(j=0; j<len; j++){
                    output[output_len++] = ' ';
                }
            }

            else{
                for(j=0; j<len; j++){
                    output[output_len++] = '-';
                }
            }

            output[output_len++] = ' ';

            if(num_str[i+1] == '\0'){
                output[output_len] = '\0';
                printf("%s\n", output);
                break;
            }

            output[output_len++] = ' ';

        }

        printf("\n");

    }



    return 0;

}
