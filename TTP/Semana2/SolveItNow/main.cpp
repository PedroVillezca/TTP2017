#include <cstdio>

using namespace std;

int main(){
    int t;
    float side;
    scanf("%d", &t);
    for(int x = 0; x < t; x++){
        scanf("%f", &side);
        side = 1/(side*side);
        printf("%.4f \n", side);
    }
    return 0;
}
