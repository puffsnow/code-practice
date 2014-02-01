#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char input[10000];
    int total=0;
    int a;
    while (gets(input))
    {
        for (a=0;input[a]!='\n';a++)
        {
            if (isalpha(input[a]))
            {
                total++;
                a++;
                while (isalpha(input[a]))
                {
                    a++;
                }
            }
            if (input[a]=='\0')
            {
                printf("%d\n",total);
                break;
            }
        }
        total=0;
    }
    system("pause");
    return 0;
} 
