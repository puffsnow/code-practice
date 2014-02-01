#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int i;

    double low, high, diff;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        scanf("%lf%lf", &low, &diff);

        low = low * 9 / 5 + 32;
        high = low + diff;
        high = (high - 32) * 5 / 9;

        printf("Case %d: %.2lf\n", i, high);

    }

    return 0;

}
