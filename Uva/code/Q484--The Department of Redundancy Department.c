#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int total=0,i;
    int answer[10000];
    int times[10000];
    while (scanf("%d",&input) != EOF){
        for (i=0;i<total || total==0;i++){
            if (input==answer[i]){
                times[i]++;
                break;
            }
            if (i==total-1 || total==0){
                answer[total]=input;
                times[total]=1;
                total++;
                break;
            }
        }
    }
    for (i=0;i<total;i++)
        printf("%d %d\n",answer[i],times[i]);
    system("pause");
    return 0;
}
