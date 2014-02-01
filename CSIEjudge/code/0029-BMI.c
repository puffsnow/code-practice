#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tall,weight;
    int i,j;
    char tempT[200],tempW[200];
    char input[3000];
    double BMI,temp;
    //int test;
    while(scanf("%s%s%s",input,tempT,tempW)==3){
        //printf("%d\n",test);
        //printf("%s %s %s\n",input,tempT,tempW);
        /*for (i=0;i<strlen(input);i++){
            if (input[i] == ' '){
                break;
            }
        }
        for (;i<strlen(input);i++){
            if (input[i] != ' ')
                break;
        }
        for (j=0;i<strlen(input);i++,j++){
            if (isdigit(input[i]) == 0){
                tempT[j] = '\0';
                break;
            }
            tempT[j] = input[i];
        }
        for (i=i+1;i<strlen(input);i++){
            if (input[i] == ' '){
                break;
            }
        }
        for (;i<strlen(input);i++){
            if (input[i] != ' ')
                break;
        }
        for (j=0;i<strlen(input);i++,j++){
            if (isdigit(input[i]) == 0){
                tempW[j] = '\0';
                break;
            }
            tempW[j] = input[i];
        }
        */
        int len ;
        len = strlen(tempT);
        tempT[len-2]='\0';
        len = strlen(tempW);
        tempW[len-2]='\0';
        sscanf(tempT,"%d",&tall);
        sscanf(tempW,"%d",&weight);
        temp = (double) tall / (double)100;
        BMI = ((double) weight / temp) / temp ;

        
        if (BMI < 18.5)
            printf("%.2lf underweight\n",BMI);
        else if (BMI >=30)
            printf("%.2lf obese\n",BMI);
        else if (BMI >= 25)
            printf("%.2lf overweight\n",BMI);
        else
            printf("%.2lf normal\n",BMI);
    }
    return 0;
}
