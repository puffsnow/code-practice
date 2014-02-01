#include <stdio.h>
#include <stdlib.h>

int main()
{
    int blue[3];
    int green[3];
    int clear[3];
    int answer[6],group;
    int i,j;
    while (scanf("%d%d%d%d%d%d%d%d%d",&blue[0],&green[0],&clear[0],&blue[1],&green[1],&clear[1],&blue[2],&green[2],&clear[2]) != EOF){
        answer[0]=blue[1]+blue[2]+green[0]+green[1]+clear[0]+clear[2];
        answer[1]=blue[1]+blue[2]+green[0]+green[2]+clear[0]+clear[1];
        answer[2]=blue[0]+blue[2]+green[0]+green[1]+clear[1]+clear[2];
        answer[3]=blue[0]+blue[1]+green[0]+green[2]+clear[1]+clear[2];
        answer[4]=blue[0]+blue[2]+green[1]+green[2]+clear[0]+clear[1];
        answer[5]=blue[0]+blue[1]+green[1]+green[2]+clear[0]+clear[2];
        group=-1;
        for (i=0;i<6;i++){
            for (j=0;j<6;j++){
                if (answer[i]>answer[j])
                    break;
                if (j==5)
                    group=i;
            }
            if (group!=-1)
                break;
        }
        switch (group){
            case 0:
                printf("BCG ");
                break;
            case 1:
                printf("BGC ");
                break;
            case 2:
                printf("CBG ");
                break;
            case 3:
                printf("CGB ");
                break;
            case 4:
                printf("GBC ");
                break;
            case 5:
                printf("GCB ");
                break;
        }
        printf("%d\n",answer[group]);
    }
    system("pause");
    return 0;
}

