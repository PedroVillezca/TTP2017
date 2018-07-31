#include <cstdio>

using namespace std;

int main(){
    int n;
    scanf("%i", &n);
    while(n != -1){
        int visit, debt = 0, times = 0;
        for(int x = 0; x < n; x++){
            scanf("%i", &visit);
            debt += visit;
            if(debt%100 == 0){
                debt = 0;
                times++;
            }
        }
        printf("%i\n", times);
        scanf("%i", &n);
    }
    return 0;
}

