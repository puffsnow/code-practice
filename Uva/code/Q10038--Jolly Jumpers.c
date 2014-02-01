#include <stdio.h>
#include <stdlib.h>
int decrease(int a,int b)
{
    if (a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    int correct[40000];
    int a,total,front,later;
    while (scanf("%d",&total) != EOF)
    {
        for (a=0;a<total;a++){
            correct[a]=0;
        }
        scanf("%d",&front);
        for (a=total-1;a>0;--a){
            scanf("%d",&later);
            if (decrease(front,later)==0 || decrease(front,later)>=total || correct[decrease(front,later)]==1){
                for (a=a-1;a>0;--a){
                    scanf("%d",&later);
                }
                a=1;
                break;
            }
            correct[decrease(front,later)]=1;
            front=later;
        }
        if (a==0){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }
    system("pause");
    return 0;
}
