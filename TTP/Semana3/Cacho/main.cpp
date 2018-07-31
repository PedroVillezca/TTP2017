#include <cstdio>

using namespace std;

int main(){
    int dados[5], t;
    bool escala;
    scanf("%d", &t);
    for(int x = 0; x < t; x++){
        escala = true;
        scanf("%d %d %d %d %d", &dados[0], &dados[1], &dados[2], &dados[3], &dados[4]);
        for(int y = 0; y < 4; y++){
            if(dados[y]+1 != dados[y+1])
                escala = false;
        }
        if(escala)
            printf("%s\n", "Y");
        else
            printf("%s\n", "N");
    }
    return 0;
}
