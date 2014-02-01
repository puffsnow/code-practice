#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line,input,Q,D,N,P;
    int i;
    scanf("%d",&line);
    
    for (i=0;i<line;i++){
        scanf("%d",&input);
        Q = input / 25;
        input = input - 25 * Q;
        D = input / 10;
        input = input - 10 * D;
        N = input / 5;
        input = input - 5 * N;
        P = input;
        printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",i+1,Q,D,N,P);
    }
    return 0;
}
