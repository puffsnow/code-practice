#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int train_count;
    int train_num[200];

    int swap_count;

    int i, j, k, temp;

    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){

        swap_count = 0;

        scanf("%d", &train_count);

        for(j=0; j<train_count; j++){
            scanf("%d", &train_num[j]);
        }

        for(j=0; j<train_count; j++){
            for(k=train_count-1; k>0; k--){
                if(train_num[k] < train_num[k-1]){
                    temp = train_num[k];
                    train_num[k] = train_num[k-1];
                    train_num[k-1] = temp;

                    swap_count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swap_count);

    }


    return 0;

}
