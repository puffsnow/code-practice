#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a,b;
    int times;
    int students,total=0,correct=0;
    int grade[1000];
    double average;
    double answer[500];
    scanf("%d",&times);
    for (a=0;a<times;a++)
    {
        scanf("%d",&students);
        for (b=0;b<students;b++)
        {
            scanf("%d",&grade[b]);
            total=total+grade[b];
        }
        average=total/students;
        for (b=0;b<students;b++)
        {
            if (grade[b]>average)
            {
                correct++;
            }
        }
        answer[a]=(double)correct*100/(double)students;
        total=0;
        correct=0;
    }
    for (a=0;a<times;a++)
    {
        printf("%.3lf",answer[a]);
        printf("\%%\n");
    }
    system("pause");
    return 0;
}
