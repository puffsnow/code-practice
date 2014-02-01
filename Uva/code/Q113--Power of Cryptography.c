#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

    double x, y;
    double ans;

    while(scanf("%lf", &y) >= 0){

        scanf("%lf", &x);

        ans = pow(x, 1 / y);

        printf("%.0lf\n",ans);

    }

    return 0;

}
