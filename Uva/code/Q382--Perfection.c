#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, i, total;
    int half_input;
    
    printf("PERFECTION OUTPUT\n");
    
    while(1){
        
        scanf("%d", &input);
        
        if (input == 0){
            break;
        }
        
        half_input = input/2;
        total = 0;
        
        for(i=1;i <= half_input; i++){
            if (input % i == 0){
                total += i;
            }
        }
        
        printf("%5d  ", input);
        
        if (total > input){
            printf("ABUNDANT\n");
        }
        else if (total < input){
            printf("DEFICIENT\n");
        }
        else{
            printf("PERFECT\n");
        }
    }
    
    printf("END OF OUTPUT\n");
    
    return 0;
    
}
