#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    char sentence[500000];
    char copy[500000];
    char answer[500000];
    int i=0,a,b;
    while ((c=getchar()) != EOF)
    {
        if (c=='"')
        {
            sentence[i++] = '`';
            sentence[i++] = '`';
            while ((c=getchar()) != '"')
            {
                sentence[i++] = c;
            }
            sentence[i++] = '\'';
            sentence[i++] = '\'';
        }
        else
        {
            sentence[i++] = c;
        }
    }
    sentence[i]= '\0';
    for (a=0;sentence[a]!='\0';a++)
    {
        printf("%c",sentence[a]);
    }
    system("pause");
    return 0;
}
