#include <iostream>

using namespace std;

int main()
{
    int n, m, x, y, cont, d;
    char dr;
    cin >> n >> m;
    cin >> x >> y >> cont;
    for(int i = 0; i < cont; i++){
        cin >> dr >> d;
        switch(dr){
        case 'N':
            y += d;
            break;
        case 'S':
            y -= d;
            break;
        case 'W':
            x += d;
            break;
        case 'E':
            x -= d;
            break;
        }
    }
    cout << x << " " << y;
    return 0;
}
