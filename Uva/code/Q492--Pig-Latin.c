#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char input[30000];
    char c;
    int i = 0;
    int j;
    
    while((c = getchar()) != EOF){
        if(isalpha(c) || c == '/'){
            input[i++] = c;
        }
        
        else{
            if (i > 0){
                if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u' || input[0] == 'A' || input[0] == 'E' || input[0] == 'I' || input[0] == 'O' || input[0] == 'U'){
                    for (j=0;j<i;j++){
                        printf("%c",input[j]);
                    }
                }
                else{
                    for (j=1;j<i;j++){
                        printf("%c",input[j]);
                    }
                    printf("%c",input[0]);
                }
                printf("ay");
            }
            i = 0;
            printf("%c",c);
        }
    }   
    return 0;
}
