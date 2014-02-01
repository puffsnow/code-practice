#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int case_num;
    int i;
    int h1,m1,h2,m2;


    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){
        scanf("%d:%d", &h1, &m1);

        if(m1 == 0){
            m2 = 0;
            h2 = 12 - h1;
        }

        else{
            m2 = 60 - m1;
            h2 = 12 - h1 - 1;
        }

        if(h2 <= 0){
            h2 += 12;
        }

        printf("%02d:%02d\n", h2, m2);

    }

    return 0;

}
