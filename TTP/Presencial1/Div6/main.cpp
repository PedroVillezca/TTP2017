#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, sum;
    cin >> n;
    for(int x = 0; x < n; x++){
        sum = 0;
        char in[1001];
        cin >> in;

        if((in[strlen(in)-1]-'0')%2 == 0){
            for(int x = 0; x < strlen(in); x++)
                sum += (in[x] - '0');
            if(sum%3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
