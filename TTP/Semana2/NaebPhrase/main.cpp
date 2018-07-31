#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char word1[101], word2[101];
    int t, change, l;
    scanf("%d", &t);
    for(int x = 0; x < t; x++){
        scanf("%s", word1);
        scanf("%s", word2);
        change = 0;
        l = strlen(word1);
        for(int y = 0; y < l; y++){
            if(word1[y] != word2[y])
                change++;
        }
        printf("%d \n", change);
    }
    return 0;
}
