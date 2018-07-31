#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int t, x;
    scanf("%i", &t);
    for(int a = 0; a < t; a++){
        scanf("%i", &x);
        int sum = 2*x*x + x*x + 2;
        printf("%i\n", sum);
    }
    return 0;
}
