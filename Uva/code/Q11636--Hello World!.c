#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i, input;
    int case_num = 1;
    int data[1000];

    data[0] = 1;

    for(i=1; i<20; i++){
        data[i] = data[i-1] * 2;
    }

    while(1){

        scanf("%d", &input);

        if(input < 0){
            break;
        }

        for(i=0;;i++){
            if(input <= data[i]){
                printf("Case %d: %d\n", case_num, i);
                case_num++;
                break;
            }
        }

    }

    return 0;

}
