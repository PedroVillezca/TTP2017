#include <iostream>

using namespace std;

int main(){
    int c, n, p;
    string t;
    cin >> c;
    for(int x = 0; x < c; x++){
        cin >> n >> t >> p;
        if(t == "even")
            n = 1 +(2 * (p-1));
        else
            n = 1* (2*p);
        cout << n << endl;
    }
    return 0;
}
