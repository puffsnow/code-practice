#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[50000];
    char output[50000];
    int a,b;
    while (gets(input) != NULL){
        b=0;
        for (a=0;input[a] != '\0';a++){
            switch (input[a]){
                case '=':
                    output[b++]='0';
                    break;
                case '-':
                    output[b++]='9';
                    break;
                case '0':
                    output[b++]='8';
                    break;
                case '9':
                    output[b++]='7';
                    break;
                case '8':
                    output[b++]='6';
                    break;
                case '7':
                    output[b++]='5';
                    break;
                case '6':
                    output[b++]='4';
                    break;
                case '5':
                    output[b++]='3';
                    break;
                case '4':
                    output[b++]='2';
                    break;
                case '3':
                    output[b++]='1';
                    break;
                case '2':
                    output[b++]='`';
                    break;
                case '\\':
                    output[b++]='[';
                    break;
                case ']':
                    output[b++]='p';
                    break;
                case '[':
                    output[b++]='o';
                    break;
                case 'p':
                    output[b++]='i';
                    break;
                case 'o':
                    output[b++]='u';
                    break;
                case 'i':
                    output[b++]='y';
                    break;
                case 'u':
                    output[b++]='t';
                    break;
                case 'y':
                    output[b++]='r';
                    break;
                case 't':
                    output[b++]='e';
                    break;
                case 'r':
                    output[b++]='w';
                    break;
                case 'e':
                    output[b++]='q';
                    break;
                case '\'':
                    output[b++]='l';
                    break;
                case ';':
                    output[b++]='k';
                    break;
                case 'l':
                    output[b++]='j';
                    break;
                case 'k':
                    output[b++]='h';
                    break;
                case 'j':
                    output[b++]='g';
                    break;
                case 'h':
                    output[b++]='f';
                    break;
                case 'g':
                    output[b++]='d';
                    break;
                case 'f':
                    output[b++]='s';
                    break;
                case 'd':
                    output[b++]='a';
                    break;
                case '/':
                    output[b++]=',';
                    break;
                case '.':
                    output[b++]='m';
                    break;
                case ',':
                    output[b++]='n';
                    break;
                case 'm':
                    output[b++]='b';
                    break;
                case 'n':
                    output[b++]='v';
                    break;
                case 'b':
                    output[b++]='c';
                    break;
                case 'v':
                    output[b++]='x';
                    break;
                case 'c':
                    output[b++]='z';
                    break;
                default:
                    output[b++]=input[a];
                    break;
            }
        }
        output[b]='\0';
        printf("%s\n",output);
    }
    system("pause");
    return 0;
}

