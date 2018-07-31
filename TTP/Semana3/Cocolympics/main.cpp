#include <cstdio>

using namespace std;

int main(){
    int n, scores[10], maxIndScore = -1, maxTotScore = -1, totScore = 0, minIndScore = 101, maxPos = -1, minPos =-1;
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        maxIndScore = -1;
        minIndScore = 101;
        totScore = 0;
        scanf("%d %d %d %d %d %d %d %d %d %d", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4], &scores[5], &scores[6], &scores[7], &scores[8], &scores[9]);
        for(int y = 0; y < 10; y++){
            if(scores[y] > maxIndScore){
                maxIndScore = scores[y];
                maxPos = y;
            }
            if(scores[y] < minIndScore){
                minIndScore = scores[y];
                minPos = y;
            }
        }
        for(int y = 0; y < 10; y++){
            if(y != minPos && y != maxPos)
                totScore += scores[y];
        }
        if(totScore > maxTotScore)
            maxTotScore = totScore;
        printf("%d %d\n", x+1, totScore);
    }
    printf("%d\n", maxTotScore);
    return 0;
}
