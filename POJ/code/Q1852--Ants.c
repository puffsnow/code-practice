#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num, ant_num;

    int len, min, max, pos;

    int i, j;

    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){

        min = 0;
        max = 0;

        scanf("%d%d", &len, &ant_num);

        for(j=0; j<ant_num; j++){

            scanf("%d", &pos);

            if(pos >= len - pos){
                if(min < len - pos){
                    min = len - pos;
                }
                if(max < pos){
                    max = pos;
                }
            }

            else{
                if(max < len - pos){
                    max = len - pos;
                }
                if(min < pos){
                    min = pos;
                }
            }

        }

        printf("%d %d\n", min, max);


    }


    return 0;

}
