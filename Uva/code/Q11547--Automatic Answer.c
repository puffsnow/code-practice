#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int input;
    int case_num;

    int ans;

    int i;


    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){
        scanf("%d", &input);

        ans = (input * 63 + 7492) * 5 - 498;

        ans = (abs(ans) / 10) % 10;

        printf("%d\n", ans);

    }


    return 0;

}
