#include <stdio.h>
#include <stdlib.h>
int main()
{
    int item,action,restrict,maximum;
    int group=0;
    int need[50],onoff[50],answer[400000]={0};
    int total;
    int a,b,c;
    while (group>=0)
    {
        scanf("%d%d%d",&item,&action,&restrict);
        if (item==0 && action==0 &&restrict==0)
        {
            break;
        }
        group++;
        maximum=0;
        for (a=0;a<item;a++)
        {
            scanf("%d",&need[a]);
            onoff[a]=0;
            maximum=maximum+need[a];
        }
        total=0;
        for (a=0;a<action;a++)
        {
            scanf("%d",&c);
            if (onoff[c-1]==0)
            {
                total=total+need[c-1];
                onoff[c-1]=1;
            }
            else
            {
                total=total-need[c-1];
                onoff[c-1]=0;
            }
            if(total>restrict)
            {
                answer[group]=0;
                for (b=a+1;b<action;b++)
                {
                    scanf("%d",&c);
                }
                break;
            }
            if (total==maximum)
            {
                answer[group]=total;
                for (b=a+1;b<action;b++)
                {
                    scanf("%d",&c);
                }
                break;
            }
            if (total>answer[group])
            {
                answer[group]=total;
            }
        }
    }
    for (a=1;a<=group;a++)
    {
        printf("Sequence %d\n",a);
        if (answer[a]==0)
        {
            printf("Fuse was blown.\n");
        }
        else
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",answer[a]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
