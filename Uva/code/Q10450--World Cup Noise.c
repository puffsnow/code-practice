#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    long long int ans[51][2];

    int input;

    int case_num;

    int i;

    ans[1][0] = 1;
    ans[1][1] = 1;

    for(i=2; i<51; i++){
        ans[i][0] = ans[i-1][0] + ans[i-1][1];
        ans[i][1] = ans[i-1][0];
    }


    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){
        scanf("%d", &input);

        printf("Scenario #%d:\n%lld\n\n", i, ans[input][0] + ans[input][1]);
    }

    return 0;

}
