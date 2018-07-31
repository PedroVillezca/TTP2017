#include <iostream>

using namespace std;

int main(){
    int n, aux, bound = 0, c = 0;
    bool change = true;
    cin >> n;
    int seed[n];
    for(int x = 0; x < n; x++)
        cin >> seed[x];
    while(change){
        change = false;
        c = 0;
        while(c < n-1-bound){
            if(seed[c] > seed[c+1]){
                aux = seed[c+1];
                seed [c+1] = seed[c];
                seed[c] = aux;
                change = true;
            }
        }
        bound++;
    }
    for(int x = 0; x < n; x++)
        cout << seed[x] << endl;
    return 0;
}
