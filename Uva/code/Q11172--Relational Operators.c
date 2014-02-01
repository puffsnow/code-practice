#include <stdio.h>
#include <stdlib.h>
int main()
{
    int total,a;
    int up[5000];
    int down[5000];
    scanf("%d",&total);
    for(a=0;a<total;a++)
    {
        scanf("%d%d",&up[a],&down[a]);
    }
    for(a=0;a<total;a++)
    {
        if (up[a]>down[a])
        printf(">");
        else if (up[a]==down[a])
        printf("=");
        else
        printf("<");
        printf("\n");
    }
    system("pause");
    return 0;
}
