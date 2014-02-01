#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char before;
    int answer = 1;
    int number = 1;
    
    
    while((c=getchar())!= EOF){       
        if (c == '#'){
            break;
        }
        else if (c == '\n'){
            if (number > answer){
                answer = number;
            }
            printf("%d\n",answer);
            answer = 1;
            number = 1;
        }
        else if (c == before + 1){
            number++;
        }
        else{
            if (number > answer){
                answer = number;
            }
            number = 1;
        }
        before = c;
    }
    
    
    return 0;   
}
