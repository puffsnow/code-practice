#include <stdio.h>
#include <stdlib.h>
int main()
{
    int base;
    int a,b;
    int answer[50000]={0};
    int first[50000],second[50000];
    int sum[50000],less[50000];
    scanf("%d",&base);
    for (a=0;a<base;a++)
    {
        scanf("%d%d",&sum[a],&less[a]);
    }
    for (a=0;a<base;a++)
    {
        if (less[a]>sum[a])
        {
            answer[a]=1;
        }
        else if ((sum[a]+less[a])%2 != 0)
        {
            answer[a]=1;
        }
        else
        {
            b=sum[a]+less[a];
            first[a]=b/2;
            b=sum[a]-less[a];
            second[a]=b/2;
        }
    }
    for (a=0;a<base;a++)
    {
        if (answer[a]==0)
        {
            printf("%d %d\n",first[a],second[a]);
        }
        else
        {
            printf("impossible\n");
        }
    }
    system("pause");
    return 0;
}
