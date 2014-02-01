#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int edge[3];
    int pow[3];

    int i;


    while(1){

        for(i=0; i<3; i++){
            scanf("%d", &edge[i]);
            pow[i] = edge[i] * edge[i];
        }

        if(edge[0] == 0 && edge[1] == 0 && edge[2] == 0){
            break;
        }

        for(i=0; i<3; i++){
            if(pow[i] == pow[(i+1) % 3] + pow[(i+2) % 3]){
                printf("right\n");
                break;
            }

            if(i==2){
                printf("wrong\n");
            }

        }

    }


    return 0;

}
