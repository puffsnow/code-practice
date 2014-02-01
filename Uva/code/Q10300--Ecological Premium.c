#include <stdio.h>
#include <stdlib.h>
int main()
{
    int time;
    int number;
    int total[100]={0};
    int space[100];
    int level[100];
    int x,a,b;
    scanf("%d",&time);
    for (a=0;a<time;a++)
    {
        scanf("%d",&number);
        for (b=0;b<number;b++)
        {
            scanf("%d%d%d",&space[b],&x,&level[b]);
        }
        for (b=0;b<number;b++)
        {
            total[a]=total[a]+space[b]*level[b];
        }
    }
    for (a=0;a<time;a++)
    {
        printf("%d\n",total[a]);
    }
    system("pause");
    return 0;
    }
