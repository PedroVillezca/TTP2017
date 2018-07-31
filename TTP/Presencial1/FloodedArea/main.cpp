#include <iostream>

using namespace std;

int main(){
    int r, c, posIni = -1, posFin = -1, pos = 1;
    cin >> r >> c;
    char berland[r][c], previous = '';
    vector<int> rows;
    int position[2];

    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            cin >> berland[r][c];
        }
    }

    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            if(berland[r][c] == '*' && posIni == -1)
                posIni == pos;
            else if(berland[r][c] != '*' && posIni != -1)
                po
            pos++
        }

        pos++;
    }

    return 0;
}
