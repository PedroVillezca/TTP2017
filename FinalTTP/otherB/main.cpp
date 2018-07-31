#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    unsigned long long int n, minBlocks;
    scanf("%llu", &n);
    int h = (int)cbrt(n)+1, c;
    do{
        minBlocks = h;
        for(c = 1; c < h; c++){
            minBlocks += (h-c)*4*c;
        }
        h++;
        printf("%i\n", h);
    }while(minBlocks <= n);
    printf("%i\n", h-2);
    return 0;
}
