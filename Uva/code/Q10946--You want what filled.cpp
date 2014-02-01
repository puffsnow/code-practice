#include <iostream>
#include <list>

using namespace std;


class hole{

    public:

        int size;
        char name;

        hole(char name_in, int size_in);


};

hole::hole(char name_in, int size_in){

    name = name_in;
    size = size_in;

}

char map[100][100];
int row, column;

char c;

bool compare(hole x, hole y){
    if(x.size < y.size){
        return false;
    }

    if(x.size == y.size && x.name > y.name){
        return false;
    }

    return true;

}

int count(int x, int y){

    int total = 0;

    if(map[y][x] == '.' || x < 0 || y < 0 || x >= column || y >= row){
        return 0;
    }

    if(map[y][x] != c){
        return 0;
    }

    map[y][x] = '.';
    total++;
    total += count(x-1, y) + count(x+1, y) + count(x, y+1) + count(x, y-1);

    return total;

}



int main(int argc, char *argv[]){

    int i, j;

    list<hole> hole_list;
    list<hole>::iterator it;

    int case_count = 1;

    hole *temp;

    while(1){

        cin >> row >> column;

        if(row == 0 && column == 0){
            break;
        }

        hole_list.clear();

        for(i=0; i<row; i++){
            cin >> map[i];
        }

        for(i=0; i<row; i++){
            for(j=0; j<column; j++){
                if(map[i][j] != '.'){
                    c = map[i][j];
                    temp = new hole(c, count(j, i));
                    hole_list.push_back(*temp);
                }
            }
        }

        hole_list.sort(compare);

        cout << "Problem "<< case_count++ <<":\n";

        for(it=hole_list.begin(); it != hole_list.end(); it++){
            cout << it->name << " " << it->size << endl;
        }

    }

    return 0;

}
