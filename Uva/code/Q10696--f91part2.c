#include <stdio.h>
#include <stdlib.h>
int f91(int i);
int main()
{
    int input[260000]={0};
    int a=0,b;
    do
    {
        scanf("%d",&input[a]);
        a++;
    }while(input[a-1]!=0);
    for (b=0;b<a-1;b++)
    {
        printf("f91(%d) = %d\n",input[b],f91(input[b]));
    }
    system("pause");
    return 0;
} 
int f91(int i)
{
    if (i<=101)
    return 91;
    else
    return i-10;
}
