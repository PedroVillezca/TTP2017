#include <iostream>

using namespace std;

int main(){
    int arr[8], currS = 0, maxS = 0, sP = 0, p;
    for(int x = 0; x < 8; x++)
        cin >> arr[x];
    for(int y = 0; y < 8; y++){
        p = sP;
        currS = 0;
        for(int z = 0; z < 4; z++){
            currS += arr[p];
            p++;
            if(p == 8)
                p = 0;
        }
        if(currS > maxS)
            maxS = currS;
        sP++;
    }
    cout << maxS << endl;
    return 0;
}
