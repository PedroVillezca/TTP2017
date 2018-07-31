#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    bool yes = false;
    string n, a = "AHIMOTUVWXY";
    cin >> t;
    if(t > 100)
        t = 100;
    for(int x = 0; x < t; x++){
        cin >> n;
        if(n == string(n.rbegin(), n.rend()))
            yes = true;
        else
            yes = false;

        for(int x = 0; x < n.length() && yes; x++)
        if(a.find(n[x]) == -1)
            yes = false;

        if(yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
