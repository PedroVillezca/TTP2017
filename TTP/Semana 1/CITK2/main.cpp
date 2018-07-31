#include <iostream>

using namespace std;

int main(){
    int k, n;
    double n2;
    bool val;
    cin >> n >> k;
    n2 = n;
    if(n%2 != 0){
        if(((float)(n-1))/k == 2)
            val = true;
        else
            val = false;
    }
    else{
        val = false;
    }
    if(n == 1 && k == 1)
        cout << 0 << endl;
    else{
    if(val)
        cout << (int)(0.5*n2*n2 - 0.5*n2) << endl;
    else
        cout << -1 << endl;
    }
    return 0;
}
