#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char first[1000000];
    char second[1000000];
    int a,b,c;
    int answer;
    while(scanf("%s",first)!=EOF)
    {
        scanf("%s",second);
        answer=0;
        for (a=0,c=0;second[a]!='\0';a++)
        {
            if (second[a]==first[c])
            {
                c++;
            }
            if (first[c]=='\0')
            {
                answer=1;
            }
        }
        if (answer==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    system("pause");
    return 0;
}
