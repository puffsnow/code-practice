#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int grade[7];
    int min;
    int total;

    int i, j;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        total = 0;

        for(j=0; j<7; j++){
            scanf("%d", &grade[j]);
        }

        min = grade[4];

        for(j=5; j<7;j++){
            if(grade[j] < min){
                total += min;
                min = grade[j];
            }
            else{
                total += grade[j];
            }
        }

        total = total / 2;

        for(j=0; j<4; j++){
            total += grade[j];
        }


        if(total >= 90){
            printf("Case %d: A\n", i);
        }
        else if(total >= 80){
            printf("Case %d: B\n", i);
        }
        else if(total >= 70){
            printf("Case %d: C\n", i);
        }
        else if(total >= 60){
            printf("Case %d: D\n", i);
        }
        else{
            printf("Case %d: F\n", i);
        }

    }

    return 0;

}
