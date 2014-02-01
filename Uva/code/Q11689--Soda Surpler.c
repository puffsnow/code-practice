#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    
    int case_num;
    int bottle_a, bottle_b, bottle;
    int change;
    int total;
        
    scanf("%d", &case_num);

    for(i=0; i<case_num; i++){
        total = 0;
        
        scanf("%d%d%d", &bottle_a, &bottle_b, &change);
        bottle = bottle_a + bottle_b;
        
        while(bottle >= change){
            total += bottle / change;
            bottle = bottle % change + bottle / change;
        }
        
        printf("%d\n", total);
    
    }

    system("pause");
    return 0;
}
