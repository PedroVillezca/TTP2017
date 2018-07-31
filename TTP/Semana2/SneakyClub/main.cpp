#include <cstdio>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    switch(n){
    case 1: case 2: case 6: case 10:
        printf("%d \n", 3);
        break;
    case 0: case 4: case 5: case 9:
        printf("%d \n", 4);
        break;
    case 3: case 7: case 8:
        printf("%d \n", 5);
        break;
    case 11: case 12:
        printf("%d \n", 6);
    }
    return 0;
}
