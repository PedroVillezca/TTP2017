#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int lowA, lowB, n, val, temp, counter = 2;
    unsigned long long int sumaTotal = 0;
    long sumaIndividual = 0;
    bool loop = true;
    cin >> n;
    lowA = n-1;
    lowB = n-2;
    int arr[n], opt[n];
    for(int x = 0; x < n; x++)
        cin >> arr[x];
    sort(arr, arr+n);
    reverse(arr, arr+n);
    opt[0] = arr[0];
    opt[1] = arr[lowA];
    opt[n-1] = arr[lowB];

    for(int x = 2; x < lowB-x && counter < n; x++){
        opt[x] = arr[x-1];
        counter++;
        if(counter < n){
            opt[n-x] = arr[x];
            counter++;
            x++;
            if(counter < n){
                opt[x] = arr[n-x];
                counter++;
                if(counter < n){
                    opt[n-x] = arr[n-x-1];
                    counter++;
                }
            }
        }
    }
    lowB = n-1;
    lowA = 1;

    for(int x = 0; loop; x++){
        sumaIndividual = 0;
        for(int y = 0; y < n; y++){
            if(y != lowB && y != lowA && y != x){
                sumaIndividual += (opt[x] * opt[y]) % 100000;
            }
        }
        sumaTotal += sumaIndividual % 100000;
        opt[x] = 0;
        lowA++;
        lowB++;
        if(lowA == n)
            lowA = 0;
        if(lowB == n)
            lowB = 0;
        if(sumaIndividual == 0)
            loop = false;
    }
    for(int x = floor(log10(sumaTotal)+1); x < 5; x++)
        cout << 0;
    cout << sumaTotal % 100000 << endl;
    return 0;
}
