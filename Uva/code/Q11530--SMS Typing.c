#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int alpha[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    int case_num;
    int i, j;

    int count;

    char input[1000];

    gets(input);
    sscanf(input, "%d", &case_num);

    for(i=1; i<=case_num; i++){

        gets(input);
        count = 0;

        for(j=0; input[j] != '\0'; j++){
            if(input[j] == ' '){
                count++;
            }
            else{
                count+=alpha[input[j] - 97];
            }
        }

        printf("Case #%d: %d\n", i, count);
    }


    return 0;

}
