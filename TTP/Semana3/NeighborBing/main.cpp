#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    char x[8], n[8];
    int pos = -1, temp;
    stringstream ss;
    scanf("%s", x);
    printf("%s", x);
    strcpy(x, n);
    for(int a = strlen(x)-1; a > 0 && pos == -1; a--){
        printf("%c %c \n", x[a], x[a-1]);
        if(x[a]-'0' > x[a-1]-'0'){
            pos = a-1;
        }
    }
    if(pos == -1){
        pos = 0;
        printf("%d\n", pos);
    }
    else{
        temp = n[pos];
        n[pos] = n[pos+1];
        n[pos+1] = temp;
        sort(n+pos+1, n+strlen(n));
        ss << n;
        ss >> temp;
        printf("%d\n", temp);
    }
    return 0;
}
