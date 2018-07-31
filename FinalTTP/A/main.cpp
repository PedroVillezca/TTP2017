#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int k, g;
    scanf("%i", &k);
    int groups[k], cvotes = 0, votes = 0, wins = 0;
    for(int x = 0; x < k; x++){
        scanf("%i", &g);
        groups[x] = g;
    }
    sort(groups, groups+k);
    for(int x = 0; wins < (k/2)+1; x++){
        votes = 0;
        while(votes != groups[x]/2 +1){
            votes++;
        }
        cvotes += votes;
        wins++;
    }
    printf("%i\n", cvotes);
    return 0;
}
