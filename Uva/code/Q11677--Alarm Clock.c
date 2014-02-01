#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int h1,m1,h2,m2;
    int min1, min2;
    int ans;

    while(1){

        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }

        min1 = h1*60+m1;
        min2 = h2*60+m2;

        ans = min2-min1;

        if(ans >= 0){
            printf("%d\n", ans);
        }

        else{
            printf("%d\n", 1440+ans);
        }

    }


    return 0;

}
