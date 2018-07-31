#include <iostream>

using namespace std;

int main(){
    long long c, a, b, acu;
    cin >> c;
    for(int x = 0; x < c; x++){
        acu = 0;
        cin >> a >> b;
        for(; a <= b; a++){
            acu += a * (a+1) * (a+2);
        }
        acu %= 100;
        cout << acu << endl;
    }
    return 0;
}

