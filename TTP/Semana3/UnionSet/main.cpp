#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, c, current;
    vector<int> uni;
    cin >> n;
    for(int x = 0; x < n; x++){
        cin >> c;
        for(int y = 0; y < c; y++){
            cin >> current;
            if(find(uni.begin(), uni.end(), current) != uni.end()){}
            else{
                uni.push_back(current);
            }
        }
    }
    cout << uni.size() << endl;
    return 0;
}
