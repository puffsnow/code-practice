#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    int i, j, a;
    int case_num;
    int highest_count;
    
    int count[26];
    char input[1000];

    gets(input);
    sscanf(input, "%d", &case_num);
    
    for(i=0;i<case_num;i++){
        
        highest_count = 0;
        
        for(j=0; j<26; j++){
            count[j] = 0;
        }
        gets(input);
        
        for(j=0; input[j] != '\0'; j++){
            if(isalpha(input[j])){
                a = tolower(input[j]) - 97;
                count[a]++;
                if(count[a] > highest_count){
                    highest_count = count[a];
                }
            }
        }
        
        for(j=0; j<26; j++){
            if(count[j] == highest_count){
                putchar(j+97);
            }
        }
        
        printf("\n");
    }


    system("pause");
    return 0;
}
