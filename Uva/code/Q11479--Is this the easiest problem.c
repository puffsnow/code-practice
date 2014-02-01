#include <stdio.h>
#include <stdlib.h>

int check(long long int *edge){

    int i;

    for(i=0; i<2; i++){
        if(edge[i] <= 0 || edge[i] >= edge[(i+1)%3] + edge[(i+2)%3] || edge[i] <= abs(edge[(i+1)%3] - edge[(i+2)%3])){
            return 0;
        }
    }
    return 1;

}

int main(int argc, char *argv[]){

    int case_num;
    long long int edge[3];
    int count;

    int i, j, k;

    scanf("%d", &case_num);

    for(i=1; i<=case_num; i++){

        scanf("%lld%lld%lld", &edge[0], &edge[1], &edge[2]);

        if(check(edge) == 0){
            printf("Case %d: Invalid\n", i);
            continue;
        }

        count = 0;

        if(edge[0] == edge[1]){
            count++;
        }

        if(edge[1] == edge[2]){
            count++;
        }

        if(edge[2] == edge[0]){
            count++;
        }

        switch(count){
            case 0:
                printf("Case %d: Scalene\n", i);
                break;
            case 1:
                printf("Case %d: Isosceles\n", i);
                break;
            case 3:
                printf("Case %d: Equilateral\n", i);
                break;
        }

    }

    return 0;

}
