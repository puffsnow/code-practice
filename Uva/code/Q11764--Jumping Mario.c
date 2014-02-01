#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int wall_num;
    int low, high, now, next;

    int i, j;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        low = 0;
        high = 0;

        scanf("%d", &wall_num);

        if(wall_num > 0){
            scanf("%d", &now);
        }

        for(j=1; j<wall_num; j++){
            scanf("%d", &next);

            if(now > next){
                low++;
            }

            else if(now < next){
                high++;
            }

            now = next;
        }

        printf("Case %d: %d %d\n", i, high, low);

    }

    return 0;

}
