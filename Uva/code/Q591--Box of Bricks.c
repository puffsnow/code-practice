#include <stdio.h>
#include <stdlib.h>
int main()
{
    int base[500];
    int many[500][50];
    int total,average,plus,a,b;
    int move[500]={0};
    for (a=0;;a++)
    {
        total=0;
        average=0;
        scanf("%d",&base[a]);
        if (base[a]==0)
        {
            break;
        }
        for (b=0;b<base[a];b++)
        {
            scanf("%d",&many[a][b]);
        }
        for (b=0;b<base[a];b++)
        {
            total=total+many[a][b];
        }
        average=total/base[a];
        for (b=0;b<base[a];b++)
        {
            if (many[a][b]>average)
            {
                plus=many[a][b]-average;
                move[a]=move[a]+plus;
            }
        }
    }
    for (b=0;b<a;b++)
    {
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",b+1,move[b]);
    }
    system("pause");
    return 0;
}
