#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers;
    int base=0;
    int answer[2000];
    int guess[2000];
    int group=0;
    int game[10000]={0};
    int correct[10000][2]={0};
    int A_B[10000][2]={0};
    int a,b,c=0,d;
    while (scanf("%d",&numbers))
    {
        if (numbers==0)
        {
            break;
        }
        for (a=0;a<numbers;a++)
        {
            scanf("%d",&answer[a]);
        }
        for (a=0;;a++)
        {
            for (b=0;b<numbers;b++)
            {
                scanf("%d",&guess[b]);
            }
            if (guess[0]==0)
            {
                break;
            }
            for (b=0;b<numbers;b++)
            {
                correct[b][0]=0;
                correct[b][1]=0;
            }
            for (b=0;b<numbers;b++)
            {
                if (guess[b]==answer[b])
                {
                    A_B[group][0]++;
                    correct[b][0]=1;
                    correct[b][1]=1;
                }
            }
            for (b=0;b<numbers;b++)
            {
                if (correct[b][0]==0)
                {
                    for (d=0;d<numbers;d++)
                    {
                        if (correct[d][1]==0 && answer[b]==guess[d])
                        {
                            A_B[group][1]++;
                            correct[b][0]=1;
                            correct[d][1]=1;
                            break;
                        }
                    }
                }
            }
            group++;
        }
        game[c]=a;
        c++;
    }
    c=0;
    for (a=0;game[a]!=0;a++)
    {
        printf("Game %d:\n",a+1);
        for (b=0;b<game[a];b++)
        {
            printf("    (%d,%d)\n",A_B[c][0],A_B[c][1]);
            c++;
        }
    }
    system("pause");
    return 0;
}

