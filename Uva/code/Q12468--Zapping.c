#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int start, end;
    int up_count, down_count;
    int i;

    while(1){

        scanf("%d%d", &start, &end);

        if(start < 0 && end < 0){
            break;
        }

        if(end >= start){
            up_count = end - start;
            down_count = 100 - up_count;
        }

        else{
            down_count = start - end;
            up_count = 100 - down_count;
        }

        if(down_count >= up_count){
            printf("%d\n", up_count);
        }

        else{
            printf("%d\n", down_count);
        }

    }



    return 0;

}
