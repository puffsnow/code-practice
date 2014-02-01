#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int input[2000];
    int time,hold;
    int a,b,c;
    while (scanf("%d",&number) != EOF){
        for (a=0;a<number;a++){
            scanf("%d",&input[a]);
        }
        time=0;
        for (a=number-2;a>=0;a=a-1){
            for (b=0;b<=a;b++){
                if (input[b]>input[b+1]){
                    hold=input[b];
                    input[b]=input[b+1];
                    input[b+1]=hold;
                    time++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",time);
    }
    system("pause");
    return 0;
}
