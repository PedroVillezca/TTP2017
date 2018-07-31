#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    long long a, b, c, sum = 0, n, m;
    scanf("%lld %lld", &a, &b);
    n = abs(a-b);
    m = a+b - 1;
    sum = (m*(m+1))/2 - (n*(n+1))/2;
    printf("%lld", sum);
    return 0;
}
