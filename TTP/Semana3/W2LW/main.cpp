#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    char word[101];
    int n;
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        scanf("%s", word);
        if(strlen(word) > 10)
            printf("%c%i%c\n", word[0], strlen(word)-2, word[strlen(word)-1]);
        else
            printf("%s\n", word);
    }
    return 0;
}
