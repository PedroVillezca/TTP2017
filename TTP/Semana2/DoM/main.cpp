#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int n, x1, x2, y1, y2;
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        scanf("%d", &x1);
        scanf("%d", &y1);
        scanf("%d", &x2);
        scanf("%d", &y2);
        x1 = abs(x1-x2);
        y1 = abs(y1-y2);
        printf("%d \n", x1+y1);
    }
    return 0;
}
