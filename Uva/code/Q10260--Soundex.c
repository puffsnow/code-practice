#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[50];
    char output[50];
    int a,b;
    while (gets(input) != NULL){
        for (a=0,b=0;input[a]!='\0';){
            if (input[a]=='B' || input[a]=='F' || input[a]=='P' || input[a]=='V'){
                output[b++]='1';
                while (input[a]=='B' || input[a]=='F' || input[a]=='P' || input[a]=='V')
                    a++;
            }
            else if (input[a]=='C' || input[a]=='G' || input[a]=='J' || input[a]=='K'|| input[a]=='Q' || input[a]=='S' || input[a]=='X' || input[a]=='Z'){
                output[b++]='2';
                while (input[a]=='C' || input[a]=='G' || input[a]=='J' || input[a]=='K'|| input[a]=='Q' || input[a]=='S' || input[a]=='X' || input[a]=='Z')
                    a++;
            }
            else if (input[a]=='D' || input[a]=='T'){
                output[b++]='3';
                while (input[a]=='D' || input[a]=='T')
                    a++;
            }
            else if (input[a]=='L'){
                output[b++]='4';
                while (input[a]=='L')
                    a++;
            }
            else if (input[a]=='M' || input[a]=='N'){
                output[b++]='5';
                while (input[a]=='M' || input[a]=='N')
                    a++;
            }
            else if (input[a]=='R'){
                output[b++]='6';
                while (input[a]=='R')
                    a++;
            }
            else
                a++;
        }
        output[b]='\0';
        printf("%s\n",output);
    }
    system("pause");
    return 0;
}
