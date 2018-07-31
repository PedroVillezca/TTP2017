#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    unsigned long long int n, minBlocks;
    scanf("%llu", &n);
    int h = (int)cbrt(n)+1, c;
    minBlocks = h;
    for(c = 1; c < h; c++){
        minBlocks += (h-c)*4*c;
    }
    if(cbrt(n) == h-1)
        printf("%i\n", h-1);
    else if(n >= minBlocks)
        printf("%i\n", h);
    else
        printf("%i\n", h-1);
    return 0;
}
