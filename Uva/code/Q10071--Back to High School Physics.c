#include<stdio.h>

int main(){
    int v,t,ans;
    while(scanf("%d%d",&v,&t) != EOF){
        ans = 2*v*2*t/2;
        printf("%d\n",ans);
    }
    
    return 0;
}
