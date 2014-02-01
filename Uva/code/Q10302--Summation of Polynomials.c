#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int answer;
    long long int input;
    long long int i;
    while (scanf("%lld",&input)!=EOF){
        answer=0;
        for (i=1;i<=input;i++){
            answer+=i*i*i;
        }
        printf("%lld\n",answer);
    }
    system("pause");
    return 0;
}
