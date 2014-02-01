#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int squ[1000];
    int begin, end;

    int i;

    for(i=0; i<1000; i++){
        squ[i] = i * i;
    }

    while(1){
        scanf("%d%d", &begin, &end);

        if(begin == 0 && end == 0){
            break;
        }

        for(i=0; i<1000; i++){
            if(squ[i] >= begin){
                begin = i;
                break;
            }
        }

        for(; i<1000; i++){
            if(squ[i] > end){
                end = i;
                break;
            }

            if(squ[i] > end){
                end = i + 1;
                break;
            }

        }

        printf("%d\n", end - begin);

    }

    return 0;
}
