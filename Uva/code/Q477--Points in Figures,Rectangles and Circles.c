#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double x,y;
    double leftupx[20]={0};
    double leftupy[20]={0};
    double rightdownx[20]={0};
    double rightdowny[20]={0};
    double midx[20]={0};
    double midy[20]={0};
    double r[20]={0};
    double pointx[10000]={0};
    double pointy[10000]={0};
    int answer[20][10000]={{0}};
    int assort[20]={0};
    char key;
    int c;
    int a=0,b=10,d,e,total=0;
    while(b>0)
    {
        if ((key=getchar())=='r')
        {
            assort[a]=1;
            scanf("%lf%lf%lf%lf",&leftupx[a],&leftupy[a],&rightdownx[a],&rightdowny[a]);
            a++;
        }
        else if (key=='c')
        {
            assort[a]=2;
            scanf("%lf%lf%lf",&midx[a],&midy[a],&r[a]);
            a++;
        }
        else
        break;
        getchar();
    }
    for (b=0;;b++)
    {
        scanf("%lf",&pointx[b]);
        scanf("%lf",&pointy[b]);
        if (pointx[b]==9999.9 && pointy[b]==9999.9)
        {
            break;
        }
    }
    for (d=0;d<b;d++)
    {
        for (e=0;e<a;e++)
        {
            if (assort[e]==1)
            {
                if(pointx[d]>leftupx[e]&&pointx[d]<rightdownx[e]&&pointy[d]<leftupy[e]&&pointy[d]>rightdowny[e])
                {
                    answer[e][d]=1;
                }
            }
            else
            {
                x=(pointx[d]-midx[e])*(pointx[d]-midx[e]);
                y=(pointy[d]-midy[e])*(pointy[d]-midy[e]);
                if((x+y)<(r[e]*r[e]))
                {
                    answer[e][d]=1;
                }
            }
        }
    }
    for (d=0;d<b;d++)
    {
        total=0;
        for (e=0;e<a;e++)
        {
            if (answer[e][d]==1)
            {
                printf("Point %d is contained in figure %d\n",d+1,e+1);
            }
            total=total+answer[e][d];
        }
        if (total==0)
        {
            printf("Point %d is not contained in any figure\n",d+1);
        }
    }
    system("pause"); 
    return 0;
}
