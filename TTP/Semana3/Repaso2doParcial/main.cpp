#include <iostream>
using namespace std;
#include "Capacidad.h"
#include "Envase.h"
#include "Refresco.h"
#include "Agua.h"

int main(){
    Capacidad cA(2, 500), cB(5, 600);
    Envase a(cA, "botella"), b(cB, "lata"), sumado, restado;
    Refresco r(cA, "botella", 100, 2500);
    Agua g(cB, "lata", 5);
    cout << "Envases iniciales: " << endl;
    a.desplegar();
    b.desplegar();
    r.desplegar();
    g.desplegar();
    cout << endl;
    cout << "Envase botella + lata" << endl;
    sumado = a + b;
    cout << sumado;
    cout << endl;
    cout << "Envase lata - botella" << endl;
    restado = b - a;
    cout << restado;
    cout << endl;
    cout << "Refresco > agua" << endl;
    cout << r;
    cout << endl;
    cout << g;
    cout << endl;
    if(r > a)
        cout << "El envase del refresco tiene mas capacidad que el del agua.";
    else
        cout << "El envase del refresco no tiene mas capacidad que el del agua.";
    cout << endl;
    cout << "Refresco < agua" << endl;
    cout << r;
    cout << endl;
    cout << g;
    cout << endl;
    if(r < a)
        cout << "El envase del refresco tiene menor capacidad que el del agua.";
    else
        cout << "El envase del refresco no tiene menor capacidad que el del agua.";
    return 0;
}
