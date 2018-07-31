#include <iostream>

using namespace std;

int main(){
    string t, p;
    int n;
    cin >> n;
    for(int x = 0; x < n; x++){
    int c = 0;
    cin >> t >> p;
    while(t.find(p) != -1){
        t.erase(t.find(p), p.length());
        c++;
    }
    cout << c << endl;
    }

    return 0;
}
