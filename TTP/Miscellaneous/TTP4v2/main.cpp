#include <iostream>

using namespace std;

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main(){
    int n, r;
    bool change = false;
    cin >> n;
    int seed[n];
    for(int x = 0; x < n; x++)
        cin >> seed[x];
    quickSort(seed, 0, n);
    r = seed[1] - seed[0];
    for(int x = 1; x < n-1 && !change; x++){
        if(seed[x+1] - seed[x] != r)
            change = true;
    }
    if(change)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
