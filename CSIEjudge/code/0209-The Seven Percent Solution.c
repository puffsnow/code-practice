#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
" " (space)  	%20
"!" (exclamation point) 	%21
"$" (dollar sign) 	%24
"%" (percent sign) 	%25
"(" (left parenthesis) 	%28
")" (right parenthesis) 	%29
"*" (asterisk) 	%2a
*/

int main(){
    char c[2];
    char percent = '%';
    while((c[0] = getchar()) != EOF){
        if (c[0] == '#'){
            break;
        }
        else if (c[0] == ' '){
            printf("%c20",percent);
        }
        else if (c[0] == '!'){
            printf("%c21",percent);
        }
        else if (c[0] == '$'){
            printf("%c24",percent);
        }
        else if (c[0] == '%'){
            printf("%c25",percent);
        }
        else if (c[0] == '('){
            printf("%c28",percent);
        }
        else if (c[0] == ')'){
            printf("%c29",percent);
        }
        else if (c[0] == '*'){
            printf("%c2a",percent);
        }
        else{
            printf("%c",c[0]);
        }
    }   
    return 0;
}
