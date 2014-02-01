#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num, ho_num;
    int max, now;
    int i, j;


    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        scanf("%d", &ho_num);
        scanf("%d", &max);

        for(j=1; j<ho_num; j++){
            scanf("%d", &now);

            if(now > max){
                max = now;
            }
        }

        printf("Case %d: %d\n", i, max);

    }

    return 0;

}
