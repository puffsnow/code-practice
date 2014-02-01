#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int input[2];    
    while(scanf("%u%u",&input[0],&input[1]) != EOF){
        printf("%u\n",input[0]^input[1]);
    }    
    return 0;
}
