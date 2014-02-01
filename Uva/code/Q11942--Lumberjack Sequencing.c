#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int leng[10];
    int i, j, k, flag;

    scanf("%d", &case_num);
    printf("Lumberjacks:\n");

    for(i=0; i<case_num; i++){
        for(j=0; j<10; j++){
            scanf("%d", &leng[j]);
        }

        if(leng[0]>leng[1]){
            for(k=1; k<9; k++){
                if (leng[k]<leng[k+1]){
                    printf("Unordered\n");
                    break;
                }
                if (k == 8){
                    printf("Ordered\n");
                    break;
                }
            }
        }
        else{
            for(k=1; k<9; k++){
                if (leng[k]>leng[k+1]){
                    printf("Unordered\n");
                    break;
                }
                if (k == 8){
                    printf("Ordered\n");
                    break;
                }
            }
        }

    }

    return 0;
}
