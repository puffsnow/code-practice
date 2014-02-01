#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    char c;
    char input[100];

    int whole_len;
    int current_step;
    int min_dis;
    int i;

    char current_store;

    while(1){

        gets(input);
        sscanf(input, "%d", &whole_len);

        if(whole_len == 0){
            break;
        }

        current_store = '.';
        min_dis = -1;
        current_step = 0;

        for(i=0; i<whole_len; i++){
            c = getchar();
            if (c == 'R'){
                if(current_store == 'R'){
                    current_step = 0;
                }
                else if(current_store == 'D'){
                    if(current_step + 1 < min_dis || min_dis < 0){
                        min_dis = current_step + 1;
                    }
                    current_step = 0;
                    current_store = 'R';
                }
                else{
                    current_store = 'R';
                }
            }

            else if (c == 'D'){
                if(current_store == 'D'){
                    current_step = 0;
                }
                else if(current_store == 'R'){
                    if(current_step + 1 < min_dis || min_dis < 0){
                        min_dis = current_step + 1;
                    }
                    current_step = 0;
                    current_store = 'D';
                }
                else{
                    current_store = 'D';
                }
            }

            else if (c == 'Z'){
                min_dis = 0;
            }

            else{
                if(current_store == 'D'){
                    current_step++;
                }
                else if(current_store == 'R'){
                    current_step++;
                }
            }
        }

        printf("%d\n", min_dis);
        getchar();

    }


    return 0;

}
