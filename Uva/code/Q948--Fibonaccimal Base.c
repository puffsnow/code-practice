#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int fib[1000];
	char output[1000];

	int case_num, fib_num;

	int input, input_save, output_count;
	int i, j;

	fib[0] = 1;
	fib[1] = 2;

	for(i=2;;i++){
		fib[i] = fib[i-1] + fib[i-2];
		if(fib[i] >= 100000000){
			break;
		}
	}

	fib_num = i;

	scanf("%d", &case_num);


	for(i=0; i<case_num; i++){
		scanf("%d", &input);

		input_save = input;
		output_count = 0;

		if(input == 0){
            printf("0 = 0 (fib)\n");
		}

		for(j=fib_num; j>=0; j--){
			if(input >= fib[j]){
				break;
			}
		}

		for(;j>=0; j--){
			if(input >= fib[j]){
				output[output_count++] = '1';
				input -= fib[j];
			}
			else{
				output[output_count++] = '0';
			}
		}

		output[output_count] = '\0';

		printf("%d = %s (fib)\n", input_save, output);

	}

	return 0;

}
