#include <stdio.h>
#include <stdlib.h>

struct com{
    int haveItem;
    char name[200];
    double pay;
};

int main()
{
    struct com best;
    int itemNum,comNum;
    int i,j;
    int caseNum = 1;
    double newPay;
    int newItemNum;
    char data[200];
    while (1){
        scanf("%d %d\n",&itemNum,&comNum);
        if (itemNum == 0 && comNum == 0){
            break;
        }
        if (caseNum >= 2){
            printf("\n");
        }
        for (i=0;i<itemNum;i++){
            gets(data);
        }
        for (i=0;i<comNum;i++){
            gets(data);
            scanf("%lf %d\n",&newPay,&newItemNum);
            if (i==0 || newItemNum > best.haveItem || (newItemNum == best.haveItem && newPay < best.pay)){
                best.haveItem = newItemNum;
                best.pay = newPay;
                strcpy(best.name,data);
            }
            for (j=0;j<newItemNum;j++){
                gets(data);
            }
        }
        printf("RFP #%d\n%s\n",caseNum,best.name);
        caseNum++;
    }
    return 0;
}
