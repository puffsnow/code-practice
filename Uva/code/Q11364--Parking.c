#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int store_num;
    int posi[1000], temp;
    int total;

    int i, j, k;

    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){

        total = 0;

        scanf("%d", &store_num);

        for(j=0; j<store_num; j++){
            scanf("%d", &posi[j]);
        }

        for(j=0; j<store_num-1; j++){
            for(k=store_num-1; k>j; k--){
                if(posi[k] < posi[k-1]){
                    temp = posi[k];
                    posi[k] = posi[k-1];
                    posi[k-1] = temp;
                }
            }
        }

        for(j=1; j<store_num; j++){
            total += posi[j] - posi[j-1];
        }

        total = total * 2;
        printf("%d\n", total);

    }

    return 0;
}
