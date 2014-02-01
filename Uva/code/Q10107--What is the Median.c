#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int number[20000];
    int i = 0,j,k;
    while (scanf("%d",&input) != EOF){
        for (j=0;j<i;j++){
            if (input<number[j])
                break;
        }
        for (k=i;k>j;--k){
            number[k] = number[k-1];
        }
        number[j] = input;
        i++;
        if ( i % 2 == 1)
            printf("%d\n",number[(i+1)/2 - 1]);
        else
            printf("%d\n",(number[i/2] + number[i/2 - 1]) / 2);
    }
    system("pause");
    return 0;
}
