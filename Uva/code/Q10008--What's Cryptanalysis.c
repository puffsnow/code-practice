#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char input[30];
    char c,hold;
    int total=0;
    int times[30]={0};
    int line,i,j,save;
    scanf("%d",&line);
    while ((c=getchar()) != EOF){
        if (isalpha(c)){
            c=toupper(c);
            for (i=0;i<=total;i++){
                if (c==input[i]){
                    times[i]++;
                    break;
                }
                if (i==total){
                    input[i]=c;
                    times[i]=1;
                    total++;
                    break;
                }
            }
        }
    }
    for (i=0;i<total;i++){
        for (j=0;j<total-i-1;j++){
            if (times[j]<times[j+1] || (times[j]==times[j+1] && input[j]>input[j+1])){
                hold=times[j];
                times[j]=times[j+1];
                times[j+1]=hold;
                save=input[j];
                input[j]=input[j+1];
                input[j+1]=save;
            }
        }
    }
    for (i=0;i<total;i++){
        printf("%c %d\n",input[i],times[i]);
    }
    system("pause");
    return 0;
}

