#include <stdio.h>
#include <stdlib.h>

int main()
{
    int smoke,leave,need;
    while (scanf("%d%d",&smoke,&need) != EOF){
        leave=smoke;
        while (leave>=need){
            smoke+=(leave/need);
            leave=leave+(leave/need)-(leave/need)*need;
        }
        printf("%d\n",smoke);
    }
    system("pause");
    return 0;
}

