#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int hour[50000],minute[50000];
    double locah[50000],locam[50000];
    int total,a;
    double angle[50000];
    for (total=0;scanf("%d:%d",&hour[total],&minute[total]);total++)
    {
        if ( hour[total]==0 && minute[total]==0)
        {
            break;
        }
    }
    for (a=0;a<total;a++)
    {
        if (hour[a]==12)
        {
            hour[a]=0;
        }
    }
    for (a=0;a<total;a++)
    {
        locah[a]=30.0*(float)hour[a]+0.5*(float)minute[a];
        locam[a]=6.0*(float)minute[a];
        if (locah[a]>=locam[a])
        {
            angle[a]=locah[a]-locam[a];
        }
        else
        {
            angle[a]=locam[a]-locah[a];
        }
        if (angle[a]>180.0)
        {
            angle[a]=360.0-angle[a];
        }
    }
    for (a=0;a<total;a++)
    {
        printf("%.3lf\n",angle[a]);
    }
    system("pause");
    return 0;
}
