#include <stdio.h>
#include <stdlib.h>
int high[10000]={0};
int time[10000]={0};
int main()
{
    int N,a,b,c,d;
    scanf("%d",&N);
    for (a=0;a<N;a++)
    {
        scanf("%d%d",&high[a],&time[a]);
    }
    for (a=0;a<N-1;a++)
    {
        for (b=0;b<time[a];b++)
        {
            for (c=1;c<=high[a];c++)
            {
                for (d=1;d<=c;d++)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
            for (c=c-2;c>=1;c=c-1)
            {
                for (d=c;d>=1;d=d-1)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    for (b=0;b<time[a]-1;b++)
        {
            for (c=1;c<=high[a];c++)
            {
                for (d=1;d<=c;d++)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
            for (c=c-2;c>=1;c=c-1)
            {
                for (d=c;d>=1;d=d-1)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
            printf("\n");
        }
        for (c=1;c<=high[a];c++)
            {
                for (d=1;d<=c;d++)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
            for (c=c-2;c>=1;c=c-1)
            {
                for (d=c;d>=1;d=d-1)
                {
                    printf("%d",c);
                }
                printf("\n");
            }
    system("pause");
    return 0;
}
