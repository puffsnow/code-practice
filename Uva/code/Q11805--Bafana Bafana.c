#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int n, k, p;
    int ans;

    int i;


    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        scanf("%d%d%d", &n, &k, &p);

        ans = (k + p) % n;

        if(ans == 0){
            printf("Case %d: %d\n", i, n);
        }

        else{
            printf("Case %d: %d\n", i, ans);
        }

    }


    return 0;

}
