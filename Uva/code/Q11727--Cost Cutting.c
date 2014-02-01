#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;

    int salary[3], temp;

    int i, j, k;


    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        for(j=0; j<3; j++){
            scanf("%d", &salary[j]);
        }

        for(j=0; j<2; j++){
            for(k=0; k<2-j; k++){
                if(salary[k] > salary[k+1]){
                    temp = salary[k];
                    salary[k] = salary[k+1];
                    salary[k+1] = temp;
                }
            }
        }

        printf("Case %d: %d\n", i, salary[1]);

    }


    return 0;

}
