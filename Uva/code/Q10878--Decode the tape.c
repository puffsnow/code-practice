#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[200];
    int number,i;
    gets(input);
    while(gets(input)){
        number = 0;
        if (input[9] == 'o'){
            number+=1;
        }
        if (input[8] == 'o'){
            number+=2;
        }
        if (input[7] == 'o'){
            number+=4;
        }
        if (input[5] == 'o'){
            number+=8;
        }
        if (input[4] == 'o'){
            number+=16;
        }
        if (input[3] == 'o'){
            number+=32;
        }
        if (input[2] == 'o'){
            number+=64;
        }
        if (input[1] == 'o'){
            number+=128;
        }
        if (number == 0){
            for (i=0;i<11;i++){
                if (input[i] != '_'){
                    break;
                }
                if (i==10){
                    return 0;
                }
            }
        }
        printf("%c",number);
    }   
    return 0;
}
