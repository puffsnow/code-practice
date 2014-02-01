#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input[2];
    int a,b;
    int i,j,total,answer,time;
    while (scanf("%d",&input[0]) != EOF)
    {
        total=0;
        scanf("%d",&input[1]);
        if (input[0]>input[1])
        {
            b=input[0];
            a=input[1];
        }
        else
        {
            a=input[0];
            b=input[1];
        }
        for (i=a;i<=b;i++)
        {
            time=1;
            for (j=i;j!=1;time++)
            {
                if (j%2==1)
                {
                    j=3*j+1;
                }
                else
                {
                    j=j/2;
                }
            }
            if (time>total)
            {
                total=time;
            }
        }
        printf("%d %d %d\n",input[0],input[1],total);
    }
    system("pause");
    return 0;
}
