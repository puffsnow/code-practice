#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int S, T, N;

    int i, j, k, l, m, n;
    int width;


    for(i=1; ; i++){
        scanf("%d%d%d", &S, &T, &N);

        if(S==0 && T==0 && N==0){
            break;
        }

        printf("Case %d:\n", i);
        width = S * N + T * (N+1);

        for(j=0; j<N; j++){

            for(k=0; k<T; k++){
                for(l=0; l<width; l++){
                    printf("*");
                }
                printf("\n");
            }


            for(k=0; k<S; k++){
                for(l=0; l<N; l++){
                    for(n=0; n<T; n++){
                        printf("*");
                    }
                    for(n=0; n<S; n++){
                        printf(".");
                    }
                }

                for(n=0; n<T; n++){
                    printf("*");
                }
                printf("\n");
            }

        }
        for(k=0; k<T; k++){
            for(l=0; l<width; l++){
                printf("*");
            }
            printf("\n");
        }

        printf("\n");

    }



    return 0;

}
