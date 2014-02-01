#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char type[10000];
    char phone[10000][10];
    double beginhour[10000];
    double daymin[10000]={0};
    double evemin[10000]={0};
    double nightmin[10000]={0};
    double beginmin[10000];
    double endhour[10000];
    double endmin[10000];
    double pay[10000];
    char c;
    int group=0,a,b;
    while (c=getchar()){
        if (c=='#')
            break;
        else{
            type[group]=c;
            c=getchar();
            c=getchar();
            phone[group][0]=c;
            for (a=1;a<8;a++){
                c=getchar();
                phone[group][a]=c;
            }
            phone[group][a]='\0';
            scanf("%lf%lf%lf%lf",&beginhour[group],&beginmin[group],&endhour[group],&endmin[group]);
            group++;
            c=getchar();
        }
    }
    for (a=0;a<group;a++){
        if (beginhour[a] != endhour[a]){
            for (b=beginhour[a];b!=endhour[a]+1;b++){
                if (b==24)
                    b=0;
                if (b>=8 && b<=17){
                    if (b==beginhour[a])
                        daymin[a]=daymin[a]+(60-beginmin[a]);
                    else if (b==endhour[a])
                        daymin[a]=daymin[a]+endmin[a];
                    else
                        daymin[a]=daymin[a]+60;
                    }
                else if (b>=18 && b<=21){
                    if (b==beginhour[a])
                        evemin[a]=evemin[a]+(60-beginmin[a]);
                    else if (b==endhour[a])
                        evemin[a]=evemin[a]+endmin[a];
                    else
                        evemin[a]=evemin[a]+60;
                    }
                else{
                    if (b==beginhour[a])
                        nightmin[a]=nightmin[a]+(60-beginmin[a]);
                    else if (b==endhour[a])
                        nightmin[a]=nightmin[a]+endmin[a];
                    else
                        nightmin[a]=nightmin[a]+60;
                    }
            }
            if (beginhour[a]==endhour[a]+1){
                daymin[a]=600;
                evemin[a]=240;
                nightmin[a]=600;
                if (beginhour[a]>=8 && beginhour[a]<=17)
                    daymin[a]=daymin[a]-beginmin[a];
                else if (beginhour[a]>=18 && beginhour[a]<=21)
                    evemin[a]=evemin[a]-beginmin[a];
                else
                    nightmin[a]=nightmin[a]-beginmin[a];
                if (endhour[a]>=8 && endhour[a]<=17)
                    daymin[a]=daymin[a]-(60-endmin[a]);
                else if (endhour[a]>=18 && endhour[a]<=21)
                    evemin[a]=evemin[a]-(60-endmin[a]);
                else
                    nightmin[a]=nightmin[a]-(60-endmin[a]);
            }
        }
        else{
            if (beginmin[a]>endmin[a]){
                daymin[a]=600;
                evemin[a]=240;
                nightmin[a]=600;
                if (beginhour[a]>=8 && beginhour[a]<=17)
                    daymin[a]=daymin[a]-(beginmin[a]-endmin[a]);
                else if (beginhour[a]>=18 && beginhour[a]<=21)
                    evemin[a]=evemin[a]-(beginmin[a]-endmin[a]);
                else
                    nightmin[a]=nightmin[a]-(beginmin[a]-endmin[a]);
            }
            else if (beginmin[a]<endmin[a]){
                if (beginhour[a]>=8 && beginhour[a]<=17)
                    daymin[a]=daymin[a]+(endmin[a]-beginmin[a]);
                else if (beginhour[a]>=18 && beginhour[a]<=21)
                    evemin[a]=evemin[a]+(endmin[a]-beginmin[a]);
                else
                    nightmin[a]=nightmin[a]+(endmin[a]-beginmin[a]);
            }
            else{
                daymin[a]=600;
                evemin[a]=240;
                nightmin[a]=600;
            }
        }
        switch (type[a]){
            case 'A':
                pay[a]=0.1*daymin[a]+0.06*evemin[a]+0.02*nightmin[a];
                break;
            case 'B':
                pay[a]=0.25*daymin[a]+0.15*evemin[a]+0.05*nightmin[a];
                break;
            case 'C':
                pay[a]=0.53*daymin[a]+0.33*evemin[a]+0.13*nightmin[a];
                break;
            case 'D':
                pay[a]=0.87*daymin[a]+0.47*evemin[a]+0.17*nightmin[a];
                break;
            case 'E':
                pay[a]=1.44*daymin[a]+0.8*evemin[a]+0.3*nightmin[a];
                break;
        }
    }
    for (a=0;a<group;a++){
        printf("%10s%6.0lf%6.0lf%6.0lf%3c%8.2lf\n",phone[a],daymin[a],evemin[a],nightmin[a],type[a],pay[a]);
    }
    system("pause");
    return 0;
}
