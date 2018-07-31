#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int t, n, k, divisor, suma;
    scanf("%i", &t);
    for(int x = 0; x < t; x++){
        suma = 0;
        scanf("%i %i", &n, &k);
        if(n == 1 && k != 1)
            printf("%i\n", n);
        else if(n == 1 && k == 1)
            printf("%i\n", 0);
        else{
        divisor = 1;
        while(divisor < sqrt(n)){
            if(n%divisor == 0){
                if(divisor%k != 0)
                    suma+=divisor;
                if((n/divisor)%k != 0)
                    suma+=(n/divisor);
            }
            divisor++;
        }
        if(divisor == sqrt(n) && divisor%k != 0)
            suma += divisor;
        printf("%d\n", suma);
        }
    }
    return 0;
}
