#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int donationN, queryN, temp, total = 0, reachCount = 0;
    scanf("%i", &donationN);
    int donations[donationN];
    for(int x = 0; x < donationN; x++){
        scanf("%i", &temp);
        donations[x] = temp;
    }
    scanf("%i", &queryN);
    long queries[queryN], templ;
    int winners[queryN];
    memset(winners, 0, sizeof(winners));
    for(int x = 0; x < queryN; x++){
        scanf("%li", &templ);
        queries[x] = templ;
    }
    for(int x = 0; x < donationN && reachCount < queryN; x++){
        total += donations[x];
        for(int y = 0; y < queryN; y++){
            if(total >= queries[y]){
                winners[y] = x+1;
                reachCount++;
                queries[y] = 10000001;
            }
        }
    }
    for(int x = 0; x < queryN; x++){
        if(winners[x] == 0)
            printf("none\n");
        else
            printf("%i\n", winners[x]);
    }
    return 0;
}
