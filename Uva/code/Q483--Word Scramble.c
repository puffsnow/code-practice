#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char input[50000];
    char output[200000];
    int a,b,i=0;
    while ((c=getchar()) != EOF)
    {
        a=0;
        while( c != ' ' && c != '\n')
        {
            input[a++]=c;
            c=getchar();
        }
        for (b=a-1;b>=0;b=b-1)
        {
            output[i++]=input[b];
        }
        output[i++]=c;
    }
    output[i]='\0';
    for (a=0;output[a]!='\0';a++)
    {
        printf("%c",output[a]);
    }
    system("pause");
    return 0;
}
