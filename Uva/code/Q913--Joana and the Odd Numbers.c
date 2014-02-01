#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int input,answer;
    long long int i,j,plus;
    while (scanf("%lld",&input) != EOF){
        answer = 0;
        plus = 1 + (3 + input) * ((input - 3) /2 + 1);
        answer = plus * 3 - 6;
        printf("%lld\n",answer);
    }
    system("pause");
    return 0;
}
