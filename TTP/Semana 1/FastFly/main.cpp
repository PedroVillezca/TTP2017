#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c;
    float d, v1, v2, m, t;
    cin >> c;
    for(int x = 0; x < c; x++){
        cin >> d >> v1 >> v2 >> m;
        t = d/(v1+v2);
        d = m * t;
        cout << fixed << setprecision(2) << d << endl;
    }
    return 0;
}
