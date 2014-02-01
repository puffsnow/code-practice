#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input,total;
    int i;
    while(1){
        scanf("%d",&input);
        if (input == 0){
            break;
        }
        printf("%d ",input);
        total = 0;
        for (i=1;;i++){
            if (input >= i){
                total += i*i;
                input = input - i;
            }
            else{
                total += input*i;
                printf("%d\n",total);
                break;
            }
        }
    }
    return 0;
}
