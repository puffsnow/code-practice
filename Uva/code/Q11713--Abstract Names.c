#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vow(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    return -1;
}


int main(int argc, char *argv[]){

    int case_num;

    char input[100];
    char com[100];

    int input_len;
    int com_len;

    int i, j;

    gets(input);

    sscanf(input, "%d", &case_num);

    for(i=0; i<case_num; i++){

        gets(input);
        gets(com);

        input_len = strlen(input);
        com_len = strlen(com);

        if(input_len != com_len){
            printf("No\n");
            continue;
        }

        for(j=0; j<input_len; j++){
            if(input[j] != com[j] && (vow(input[j]) < 0 || vow(com[j]) < 0) ){
                printf("No\n");
                break;
            }

            if(j == input_len - 1){
                printf("Yes\n");
                break;
            }
        }
    }




    return 0;

}
