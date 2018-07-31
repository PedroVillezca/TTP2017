#include <cstdio>
#include <cstring>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int n, m2, total = 1;
    char m[11];
    stringstream ss;
    scanf("%d", &n);
    do{
        sprintf(m, "%d", n);
        sort(m, m+strlen(m));
        ss << m;
        ss >> m2;
        if(n-m2 != 0){
            total++;
            n = n-m2;
            ss.str("");
            ss.clear();
        }
    }while(n-m2 != 0);
    printf("%d \n", total);
    return 0;
}
