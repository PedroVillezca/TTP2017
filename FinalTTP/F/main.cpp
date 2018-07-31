#include <cstdio>
#include <cstring>

using namespace std;
//a = 97
//A = 65
int main(){
    int s, upper = 0, lower = 0;
    char word[10];
    scanf("%i %s", &s, word);
    for(int x = 0; x < s; x++){
        int c = word[x];
        if(c >= 97)
            lower++;
        else
            upper++;
    }
    printf("%i %i\n", upper, lower);
    return 0;
}
