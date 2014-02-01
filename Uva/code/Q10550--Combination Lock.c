#include <stdio.h>
#include <stdlib.h>

int main()
{
    int begin,first,second,third;
    int degree;
    while(1){
        scanf("%d%d%d%d",&begin,&first,&second,&third);
        if (begin == 0 && first ==0 && second == 0 && third == 0){
            break;
        }
        degree = 720;
        if (first > begin){
            begin = begin + 40;
        }
        degree += (begin - first) * 9;
        degree += 360;
        if (first > second){
            first = first - 40;
        }
        degree += (second - first) *9;
        if (third > second){
            second = second + 40;
        }
        degree += (second - third) *9;
        printf("%d\n",degree);
    }
    
    return 0;
}
