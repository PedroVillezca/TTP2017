#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char arr[101];
    scanf("%s", arr);
    int n = strlen(arr), ind = 0, y;
    for(int x = (n/2)-1; x > -1; x--)
        printf("%c", arr[x]);
    if(n%2 != 0){
        printf("%c", arr[n/2]);
        ind = 1;
    }
    for(y = n-1; y >= (n/2)+ind+1; y--)
        printf("%c", arr[y]);
    printf("%c \n", arr[y]);
    return 0;
}
