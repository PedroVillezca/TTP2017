#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    char c[8];
    int x[7], n[7], pos = -1, temp, q, b, y;
    scanf("%s", c);
    for(int a = 0; a < strlen(c); a++){
        x[a] = c[a] - '0';
        n[a] = x[a];
    }
    for(y = strlen(c); y > 0 && pos == -1; y--){
        if(x[y] > x[y-1])
            pos = y;
    }
    if(pos == -1)
        printf("%d", 0);
    else{
        y++;
        temp = x[y];
        x[y] = x[y-1];
        x[y-1] = temp;
        sort(x+pos, x+strlen(c));
        printf("%d x \n", x[0]);
        for(y = 0; y < strlen(c); y++){
            q = q*10 + x[y];
        }
        printf("%d %d \n", q);
        if(q > b)
            printf("%d", q);
    }
}

/*
int main(){
    char x[8], n[8];
    int pos = -1, temp, c = 1, b = 1;
    stringstream ss;
    scanf("%s", x);
    strcpy(x, n);
    for(int a = strlen(x); a > 0 && pos == -1; a--){
        printf("%c %c \n", x[a], x[a-1]);
        if(x[a] > x[a-1])
            pos = a-1;
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
*/
