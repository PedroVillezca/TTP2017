#include <iostream>

using namespace std;

int main(){
    int t, k, n;
    cin >> t;
    for(int x = 0; x < t; x++){
        cin >> k;
        n = 0;
        for(int y = 0; y < k; y++)
            n = 2*n + 1;
        cout << n << endl;
    }
    return 0;
}
