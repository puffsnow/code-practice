#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct save{
    int time;
    char c;
};

int main(){
    char input[2000];
    int baseNum,len;
    int i,j;
    struct save a[2000];
    char tempC;
    int temp;
    int next = 0;
    
    while(gets(input)){
        baseNum = 0;
        len = strlen(input);
        if (next == 1){
            printf("\n");
        }
        for (i=0;i<len;i++){
            for (j=0;j<baseNum+1;j++){
                if (j == baseNum){
                    a[j].c = input[i];
                    a[j].time = 1;
                    baseNum++;
                    break;
                }
                else if(input[i] == a[j].c){
                    a[j].time++;
                    break;
                }
            }
        }
        for (i=0;i<baseNum-1;i++){
            for (j=0;j<baseNum-1;j++){
                if (a[j].time > a[j+1].time || (a[j].time == a[j+1].time && a[j].c < a[j+1].c)){
                    tempC = a[j].c;
                    temp = a[j].time;
                    a[j].c = a[j+1].c;
                    a[j].time = a[j+1].time;
                    a[j+1].c = tempC;
                    a[j+1].time = temp;
                }
            }
        }
        for (i=0;i<baseNum;i++){
            printf("%d %d\n",a[i].c,a[i].time);
        }
        next = 1;
    }

    return 0;
}
