#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input,limit;
	int temp;
	int terms;
	int case_num = 1;

	while(1){
    
    	scanf("%d %d", &input, &limit);
   	 
    	if (input < 0 && limit < 0){
        	break;
    	}
    
    	terms = 0;
    	temp = input;
   	 
    	while(1){
   	 
        	if (temp < 0 || temp > limit){
            	break;
        	}
   	 
        	if (temp == 1){
            	terms++;
            	break;
        	}
   	 
        	if (temp % 2 == 0){
            	temp = temp / 2;
        	}
   	 
        	else{
            	temp = temp * 3 + 1;
        	}
   	 
        	terms++;
   	 
    	}
    
    	printf("Case %d: A = %d, limit = %d, number of terms = %d\n", case_num, input, limit, terms);
    	case_num++;
    
	}

	return 0;
}

