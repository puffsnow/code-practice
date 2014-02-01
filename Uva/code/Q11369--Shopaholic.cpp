#include <iostream>
#include <list>

using namespace std;


bool compare(int a, int b){
    if(a < b){
        return false;
    }
    return true;
}

int main(int argc, char *argv[]){

    list<int> pay;
    int case_num, item_num;
    int total, temp;

    int i, j, count;

    cin >> case_num;

    for(i=0; i<case_num; i++){

        total = 0;
        count = 0;

        cin >> item_num;

        for(j=0; j<item_num; j++){
            cin >> temp;
            pay.push_front(temp);
        }

        pay.sort(compare);

        for(j=0; j<item_num; j++){
            temp = pay.front();
            count++;
            if(count == 3){
                total += temp;
                count = 0;
            }
            pay.pop_front();
        }

        cout << total << endl;

    }

    return 0;

}
