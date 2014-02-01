#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int level,total,up,down;
    int i,j;
    while (scanf("%d",&input) != EOF){
        total = 0;
        level = 1;
        for (i=1;total<input;i++){
            total += i;
            level++;
        }
        level--;
        if (level % 2 == 1){
            up = 1;
            down = level;
            for (i=total-input;i>0;--i){
                up++;
                down--;
            }
        }
        else{
            up = level;
            down = 1;
            for (i=total-input;i>0;--i){
                up--;
                down++;
            }
        }
        printf("TERM %d IS %d/%d\n",input,up,down);
    }
    system("pause");
    return 0;
}
