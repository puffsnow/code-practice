#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int first,second;
    unsigned int fLast,sLast;
    unsigned int plus;
    unsigned int total;
    int plusTime;
    while(scanf("%u %u",&first,&second)){
        if (first == 0 && second ==0){
            break;
        } 
        plus = 0;
        plusTime = 0;
        while (first != 0 || second != 0){
            fLast = first % 10;
            sLast = second % 10;
            first = first / 10;
            second = second / 10;
            total = fLast + sLast + plus;
            if (total>=10){
                plus = 1;
                plusTime++;
            }
            else{
                plus = 0;
            }
        }
        if ( plusTime == 0){
            printf("No carry operation.\n"); 
        } 
        else if ( plusTime == 1){ 
            printf("1 carry operation.\n"); 
        }
        else{ 
            printf("%d carry operations.\n",plusTime);
        } 
    }
    return 0;
}
