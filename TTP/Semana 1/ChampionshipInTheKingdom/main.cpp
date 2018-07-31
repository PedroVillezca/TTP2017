#include <iostream>

using namespace std;

int main(){
    int n, k;
    bool val;
    cin >> n >> k;
    if(n%2 != 0){
        if((n-1)%k == 0 && (n/2) == k)
            val = true;
        else
            val = false;
    }
    else{
        val = false;
    }
    if(val)
        cout << (int)(0.5*n*n - 0.5*n) << endl;
    else
        cout << -1 << endl;
    return 0;
}
