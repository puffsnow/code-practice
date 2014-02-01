#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5000],b[5000];
    int i,c,line,total;
    scanf("%d",&line);
    for ( i=0; i<line; i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for ( i=0; i<line; i++)
    {
        for ( c=a[i],total=0 ; c<=b[i] ; c++)
        {
            if (c % 2 == 1)
            {
                total=total+c;
            }
        }
        printf("Case %d: %d\n",i+1,total);
    }
    system("pause");
    return 0;
}
