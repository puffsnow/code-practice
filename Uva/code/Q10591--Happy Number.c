#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers;
    int input,answer = 0;
    int i,j,k,l;
    int save[100];
    char des[20];
    char c[2];
    scanf("%d",&numbers);
    for (i=0;i<numbers;i++){
        for (k=0;k<100;k++){
            save[k] = 0;
        }
        scanf("%d",&save[0]);
        input = save[0];
        for (j=0;;j++){
            if (save[j] == 1){
                answer = 1;
                break;
            }
            for (k=0;k<j;k++){
                if (save[j] == save[k]){
                    answer = -1;
                    break;
                }
            }
            if (answer != 0){
                break;
            }
            l = save[j];
            for (k=0;l != 0;k++,l=l/10){
                switch(l%10){
                    case 0:
                        des[k] = '0';
                        break;
                    case 1:
                        des[k] = '1';
                        break;
                    case 2:
                        des[k] = '2';
                        break;
                    case 3:
                        des[k] = '3';
                        break;
                    case 4:
                        des[k] = '4';
                        break;
                    case 5:
                        des[k] = '5';
                        break;
                    case 6:
                        des[k] = '6';
                        break;
                    case 7:
                        des[k] = '7';
                        break;
                    case 8:
                        des[k] = '8';
                        break;
                    case 9:
                        des[k] = '9';
                        break;
                }
            }
            des[k] = '\0';
            for (k=0;des[k] != '\0';k++){
                sscanf(des+k,"%c",c);
                save[j+1] += atoi(c)*atoi(c);
            }
        }
        if (answer == 1){
            printf("Case #%d: %d is a Happy number.\n",i+1,input);
        }
        else{
            printf("Case #%d: %d is an Unhappy number.\n",i+1,input);
        }
        answer = 0;
    }
    system("pause");
    return 0;
}
