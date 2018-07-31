#include <cstdio>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
    unsigned long long int n, square2;
    stringstream ss;
    scanf("%llu", &n);
    while(n != 0){
        long double square;
        ss << sqrtl(8*n +1);
        ss >> square;
        square2 = floor(square);
        if(square == square2)
            printf("%s\n", "YES");
        else
            printf("%s\n", "NO");
        scanf("%llu", &n);
    }
    return 0;
}
