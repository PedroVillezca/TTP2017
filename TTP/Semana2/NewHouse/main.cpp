#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int t, n, minimo, maximo;
    char in[11];
    scanf("%d", &t);
    for(int x = 0; x < t; x++){
        maximo = 0;
        scanf("%d", &n);
        int oMat[n][n];
        int fMat[n][n];
        for(int r = 0; r < n; r++){
            scanf("%s", in);
            for(int c = 0; c < n; c++){
                if(in[c] == '.')
                    oMat[r][c] = 1;
                else
                    oMat[r][c] = 0;
            }
        }
        for(int c = 0; c < n; c++)
            fMat[0][c] = oMat[0][c];
        for(int r = 1; r < n; r++)
            fMat[r][0] = oMat[r][0];

        for(int r = 1; r < n; r++){
            for(int c = 1; c < n; c++){
                if(oMat[r][c] == 0)
                    fMat[r][c] = 0;
                else{
                    minimo = min(min(fMat[r][c-1], fMat[r-1][c-1]), fMat[r-1][c]);
                    fMat[r][c] = 1 + minimo;
                    if(fMat[r][c] > maximo)
                        maximo = fMat[r][c];
                }
            }
        }
        printf("%d\n", maximo);
    }

    return 0;
}
