#include <iostream>

using namespace std;

int main(){
    string v;
    int s, m, c=0, p=0;
    bool acc = false;
    cin >> s;
    for(int x = 0; x < s; x++){
        cin >> m >> v;
        if(m < 301 && !acc){
            if(v == "AC"){
                p += (20*c) + m;
                acc = true;
            }
            else
                c++;
        }
    }
    cout << p << endl;
    return 0;
}
