#include <cstdio>

using namespace std;

int main(){
    long int w, h, aX, aY, bX, bY, cX1, cY1, cX2, cY2;
    scanf("%li %li %li %li %li %li", &w, &h, &aX, &aY, &bX, &bY);
    if(aX != bX){
        cX1 = aX;
        cY1 = 0;
        cX2 = bX;
        cY2 = h;
    }
    else{
        cX1 = 0;
        cY1 = aY;
        cX2 = w;
        cY2 = bY;
    }
    printf("%li %li %li %li\n", cX1, cY1, cX2, cY2);
    return 0;
}
