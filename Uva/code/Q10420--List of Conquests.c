#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct country{

    char name[100];
    int count;
    struct country *nextPtr;

}Country;


int main(int argc, char *argv[]){

    int women_num;
    char input[100];

    Country *start_ptr = NULL;
    Country *curren_ptr;
    Country *last_ptr;
    Country *temp_ptr;

    int i, j;

    gets(input);
    sscanf(input, "%d", &women_num);

    for(i=0; i<women_num; i++){
        gets(input);
        for(j=0;;j++){
            if(input[j] == ' '){
                input[j] = '\0';
                break;
            }
        }

        curren_ptr = start_ptr;
        last_ptr = NULL;

        while(1){

            if(start_ptr == NULL){

                start_ptr = (Country *) malloc(sizeof(Country));
                strcpy(start_ptr->name, input);
                start_ptr->count = 1;
                start_ptr->nextPtr = NULL;

                break;
            }

            else if(curren_ptr == NULL){

                curren_ptr = (Country *) malloc(sizeof(Country));
                strcpy(curren_ptr->name, input);
                curren_ptr->count = 1;
                curren_ptr->nextPtr = NULL;
                last_ptr->nextPtr = curren_ptr;

                break;
            }

            else if(strcmp(curren_ptr->name, input) == 0){
                curren_ptr->count++;
                break;
            }

            else if(strcmp(curren_ptr->name, input) > 0){
                temp_ptr =(Country *) malloc(sizeof(Country));
                strcpy(temp_ptr->name, input);
                temp_ptr->count = 1;
                temp_ptr->nextPtr = curren_ptr;
                if(last_ptr != NULL){
                    last_ptr->nextPtr = temp_ptr;
                }
                else{
                    start_ptr = temp_ptr;
                }
                break;
            }

            else{

                last_ptr = curren_ptr;
                curren_ptr = curren_ptr->nextPtr;


            }

        }

    }

    curren_ptr = start_ptr;

    while(curren_ptr != NULL){
        printf("%s %d\n", curren_ptr->name, curren_ptr->count);
        curren_ptr = curren_ptr->nextPtr;
    }


    return 0;

}
