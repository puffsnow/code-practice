#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv){

    queue<int> cards;

    int input;

    int i;


    while(1){

        cin >> input;

        if(input == 0){
            break;
        }

        for(i=1; i<=input; i++){
            cards.push(i);
        }

        cout << "Discarded cards:";

        while(cards.size() >= 2){
            if(cards.size() > 2){
                cout << " " << cards.front() << ",";
            }
            else{
                cout << " " << cards.front();
            }

            cards.pop();
            cards.push(cards.front());
            cards.pop();

        }

        cout << endl << "Remaining card: " << cards.front() << endl;

        cards.pop();

    }




    return 0;

}
