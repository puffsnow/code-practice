#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int ink[100];

    int case_num, num_num;

    int input, input_temp;

    int smallest_ink;
    int this_ink;
    int base_ans[100];
    int base_ans_count;

    int i, j, k;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        if(i > 1){
            printf("\n");
        }

        printf("Case %d:\n", i);

        for(j=0; j<36; j++){
            scanf("%d", &ink[j]);
        }

        scanf("%d", &num_num);

        for(j=0; j<num_num; j++){

            base_ans_count = 0;
            smallest_ink = -1;

            scanf("%d", &input);

            for(k=2; k<=36; k++){
                input_temp = input;
                this_ink = 0;

                if(input == 0){
                    this_ink = ink[0];
                }

                while(input_temp > 0){
                    this_ink += ink[input_temp % k];
                    input_temp = input_temp / k;
                }

                if(this_ink < smallest_ink || smallest_ink < 0){
                    smallest_ink = this_ink;
                    base_ans_count = 0;
                    base_ans[base_ans_count++] = k;
                }

                else if(this_ink == smallest_ink){
                    base_ans[base_ans_count++] = k;
                }
            }

            printf("Cheapest base(s) for number %d:", input);

            for(k=0; k<base_ans_count; k++){
                printf(" %d", base_ans[k]);
            }

            printf("\n");

        }


    }



    return 0;

}
