#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, a2;
    int p;
    while(cin >> a >> b){
    a2 = a;
    int x = 0;
    while(x < b.length()){
        p = a.find(b[x]);
        if(p == -1){
            b.erase(x, 1);
        }
        else{
            a.erase(p, 1);
            x++;
        }
        if(a == "")
            b.erase(x);
        cout << a << ","<< b << endl;
    }
    if(a2 == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
    return 0;
}

