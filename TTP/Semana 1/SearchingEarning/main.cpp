#include <iostream>

using namespace std;

int main(){
    int s, c, pos, prof = 0;
    cin >> s >> c;
    int arr[s], low[c];
    for(int x = 0; x < s; x++)
        cin >> arr[x];
    for(int x = 0; x < c; x++)
        low[x] = 0;
    for(int y = 0; y < c; y++){
        low[y] = 1001;
        pos = -1;
        for(int x = 0; x < s; x++){
            if(low[y] > arr[x]){
                low[y] = arr[x];
                pos = x;
            }
        }
        arr[pos] = 1001;
    }
    for(int a = 0; a < c; a++){
        if(low[a] < 0)
            prof += low[a]*-1;
    }
    cout << prof;
    return 0;
}
