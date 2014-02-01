#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int age[21];
    int case_num;
    int hu_num;

    int i, j;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        scanf("%d", &hu_num);
        for(j=0; j<hu_num; j++){
            scanf("%d", &age[j]);
        }

        printf("Case %d: %d\n", i, age[hu_num / 2]);

    }


    return 0;
}
