#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char input[10000];
    int a;
    while (gets(input))
    {
        for (a=0;input[a]!='\0';a++)
        {
            input[a]=input[a]-7;
        }
        for (a=0;input[a]!='\0';a++)
        {
            printf("%c",input[a]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
} 
