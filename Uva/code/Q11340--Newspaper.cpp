#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;


int main(int argc, char *argv[]){

    map<char, double> pay;
    map<char, double>::iterator it;



    int case_num, char_num, line_num;
    int i, j, k;

    char c;
    char input[10050];
    double c_pay;
    double total;

    cin >> case_num;

    for(i=0; i<case_num; i++){

        pay.clear();
        c_pay = 0;
        total = 0;

        cin >> char_num;

        for(j=0; j<char_num; j++){
            cin >> c >> c_pay;
            pay[c] = c_pay;
        }

        cin >> line_num;
        cin.getline(input,10005);

        for(j=0; j<line_num; j++){
            cin.getline(input,10005);

            for(k=0; input[k]!='\0'; k++){
                total += pay[input[k]];
            }

        }

        printf("%.2lf$\n", total/100);

    }


    return 0;

}
