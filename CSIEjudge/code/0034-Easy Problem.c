#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line,a,b,i;
    scanf("%d",&line);
    for (i=0;i<line;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",b);
    }
    return 0;
}
