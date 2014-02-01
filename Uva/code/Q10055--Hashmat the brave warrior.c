#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int input[2]={0};
    long long int a,i=0,hold;
    long long int answer;
    while (scanf("%lld",&input[0]) != EOF)
    {
        scanf("%lld",&input[1]);    
        if (input[0]>input[1])
        {
            hold=input[0];
            input[0]=input[1];
            input[1]=hold;
        }
        answer=input[1]-input[0];
        printf("%lld\n",answer);
    }
    system("pause");
    return 0;
}
