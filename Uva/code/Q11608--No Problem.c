#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num = 1;
    int pro_left;
    int pro_crea[12];
    int pro_need;
    int i;

    while(1){
        scanf("%d", &pro_left);

        if(pro_left < 0){
            break;
        }

        printf("Case %d:\n", case_num);

        for(i=0; i<12; i++){
            scanf("%d", &pro_crea[i]);
        }

        for(i=0; i<12; i++){
            scanf("%d", &pro_need);
            if(pro_left >= pro_need){
                pro_left -= pro_need;
                printf("No problem! :D\n");
            }
            else{
                printf("No problem. :(\n");
            }
            pro_left += pro_crea[i];
        }

        case_num++;

    }
    return 0;
}
