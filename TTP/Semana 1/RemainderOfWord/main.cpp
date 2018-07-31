#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char c[100001];
    long mult = 1;
    cin >> c;
    for(int x = 0; x < strlen(c); x++){
        mult *= (c[x] - 64);
        mult = mult%26;
    }
    if(mult < 10)
        cout << 0 << mult << endl;
    else
        cout << mult << endl;
    return 0;
}
