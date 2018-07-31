#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int l, l2;
    cin >> l;
    l2 = l;
    string keys[l], n;
    cin >> keys[0];
    sort(keys[0].begin(), keys[0].end());
    for(int x = 1; x < l; x++){
        cin >> keys[x];
        sort(keys[x].begin(), keys[x].end());
    }
    sort(keys, keys + l);
    for(int x = 0; x < l-1; x++){
        if(keys[x] == keys[x+1])
            l2--;
    }
    cout << l2 << endl;
    return 0;
}
