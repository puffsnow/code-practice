#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,less,x;
    int up,down;
    int total,answer[500000];
    scanf("%d",&total);
    for (a=0;a<total;a++){
        scanf("%d",&x);
        scanf("%d%d",&up,&down);
        less=up-down;
        for (b=0;b<x-1;b++){
            scanf("%d%d",&up,&down);
            if (up-down != less)
                break;
        }
        if (b==x-1)
            answer[a]=1;
        else{
            for (b=b+1;b<x-1;b++){
                scanf("%d%d",&up,&down);
            }
            answer[a]=0;
        }
    }
    for (a=0;a<total;a++){
        if (answer[a]==1)
            printf("yes\n");
        else
            printf("no\n");
        if (a<total-1)    
            printf("\n");
    }
    system("pause");
    return 0;
}
