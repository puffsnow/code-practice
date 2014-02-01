#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int nums;
    int i, leng, j;
    int rec[200];
    int rec_leng;
    int pass;
    char input[200];
   
    gets(input);
    sscanf(input,"%d",&nums);
   

    for (i=0;i<nums;i++){
   
       gets(input);
       leng = strlen(input);
       rec_leng = 0;
       pass = 1;
       
       for (j=0;j<leng;j++){
           if (input[j] == '('){
               rec[rec_leng++] = 1;
           }
       
           else if (input[j] == '['){
               rec[rec_leng++] = 0;
           }
       
           else if (input[j] == ')' && (rec_leng == 0 || rec[--rec_leng] != 1)){
               pass = 0;
               break;
           }
           
           else if (input[j] == ']' && (rec_leng == 0 || rec[--rec_leng] != 0)){
               pass = 0;
               break;
           }
       }
       
       if (pass == 0 || rec_leng > 0){
           printf("No\n");
       }
       else{
           printf("Yes\n");
       }
    }
    return 0;   
}
