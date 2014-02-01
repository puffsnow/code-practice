#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num, n;

    int time, mile, juice;

    int i, j;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        mile = 0;
        juice = 0;

        scanf("%d", &n);

        for(j=0; j<n; j++){
            scanf("%d", &time);

            mile += (time / 30 + 1) * 10;
            juice += (time / 60 + 1) * 15;

        }

        if(mile > juice){
            printf("Case %d: Juice %d\n", i, juice);
        }

        else if(mile < juice){
            printf("Case %d: Mile %d\n", i, mile);
        }

        else{
            printf("Case %d: Mile Juice %d\n", i, juice);
        }

    }


    return 0;

}
