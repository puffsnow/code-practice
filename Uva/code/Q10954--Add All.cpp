#include <iostream>
#include <list>

using namespace std;

bool compare(int first, int second){

    if(first > second){
        return false;
    }

    return true;
}


int main(int argc, char*argv[]){

    list<int> num;
    list<int>::iterator it;

    int num_count;

    int i, temp, total;

    while(1){

        cin >> num_count;

        if(num_count == 0){
            break;
        }

        num.clear();
        total = 0;

        for(i=0; i<num_count; i++){
            cin >> temp;
            num.push_front(temp);
        }

        num.sort(compare);

        while(num.size() >= 2){

            temp = num.front();
            num.pop_front();
            temp += num.front();
            num.pop_front();

            total += temp;

            for (it=num.begin(); it!=num.end(); ++it){
                if(temp < *it){
                    num.insert(it, temp);
                    temp = -1;
                    break;
                }
            }

            if(temp >= 0){
                num.push_back(temp);
            }

        }

        cout << total << endl;


    }




    return 0;

}
