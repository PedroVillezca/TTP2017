#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int o, v, t = 0, f = 1;
    cin >> o;
    for(int x = 0; x < o; x++){
        cin >> v;
        t += abs(v-f);
        f = v;
    }
    t += f - 1;
    cout << t << endl;
    return 0;
}
