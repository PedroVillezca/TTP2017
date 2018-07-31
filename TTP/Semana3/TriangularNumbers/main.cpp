#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    unsigned long long int n;
    scanf("%llu", &n);
    while(n != 0){
        long double square = sqrtl((8*n+1));
        if(square == (unsigned long long int)square)
            printf("%s\n", "YES");
        else
            printf("%s\n", "NO");
        scanf("%llu", &n);
    }
    return 0;
}
