#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int lowA, lowB, n, val, temp;
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

    opt[0] = arr[0];
    opt[1] = arr[lowA];
    opt[n-1] = arr[lowB];

    //bA,lA, ... lB,bB
    for(int x = 2; x < lowB-x; x ++){
        opt[x] = arr[x-1];
        opt[n-x] = arr[x];
        x++;
        opt[x] = arr[lowA-x];
        opt[n-x] = arr[lowB-x];
    }

    for(int x = 0; x < n; x++)
        cout << opt[x] << endl;
    /*
    for(int x = floor(log10(sumaTotal)+1); x < 5; x++)
        cout << 0;
    cout << sumaTotal % 100000 << endl;
    return 0;
    */
}

/*
int main(){
    int lowA = 0, lowB = 0, high = 0, n, val, temp;
    unsigned long long int sumaTotal = 0;
    long sumaIndividual = 0;
    bool loop = true;
    cin >> n;
    int arr[n];
    cin >> val;
    arr[0] = val;
    for(int x = 1; x < n; x++){
        cin >> val;
        arr[x] = val;
        if(val > arr[high])
            high = x;
        if(val < arr[lowA]){
            lowB = lowA;
            lowA = x;
        }
        else if(val < arr[lowB])
            lowB = x;
    }
    if(high + 1 == n){
        temp = arr[0];
        arr[0] = arr[lowA];
        arr[lowA] = temp;
        lowA = 0;
    }
    else{
        temp = arr[high+1];
        arr[high+1] = arr[lowA];
        arr[lowA] = temp;
        lowA = high+1;
    }
    if(high - 1 < 0){
        temp = arr[n-1];
        arr[n-1] = arr[lowB];
        arr[lowB] = temp;
        lowB = n-1;
    }
    else{
        temp = arr[high-1];
        arr[high-1] = arr[lowB];
        arr[lowB] = temp;
        lowB = n-1;
    }

    for(int x = high; loop; x++){
        if(x >= n)
            x = 0;
        sumaIndividual = 0;
        for(int y = 0; y < n; y++){
            if(y != lowB && y != lowA && y != x){
                sumaIndividual += (arr[x] * arr[y]) % 100000;
            }
        }
        sumaTotal += sumaIndividual % 100000;
        arr[x] = 0;
        lowA++;
        lowB++;
        if(lowA == n)
            lowA = 0;
        if(lowB == n)
            lowB = 0;
        if(sumaIndividual == 0)
            loop = false;
    }
    for(int x = 0; x < floor(log10(sumaTotal)+1) && floor(log10(sumaTotal)+1) < 5; x++)
        cout << 0;
    cout << sumaTotal % 100000 << endl;
    return 0;
}
*/
