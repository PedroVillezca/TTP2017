#ifndef BULTO_H_INCLUDED
#define BULTO_H_INCLUDED
#include <math.h>
// Nombre: Clase Bulto
//Descipci�n: clase que contiene los atributos kilos y gramos, que representan el peso de un bulto
//Autor: Maestras
//Fecha: 5 octubre
class Bulto{
    private:
		int kilos;
		int gramos;
	public:
	    //Constructores
	    Bulto();
		Bulto(int k);
		Bulto(int k, int g);
		//M�todos de acceso
		void setKilo(int k);
		void setGramo(int g);
		//M�todos de modificaci�n
		int getKilo();
		int getGramo();
		//M�todos de operaci�n
		void muestra();
		void operator++(int);  // incrementa un gramo al bulto
		friend void operator--(Bulto &b,int);  // decrementa un gramo al bulto
		Bulto operator+(int m);  // suma la cantidad de gramos recibidos en m a bulto y regresa el bulto modificado
		friend Bulto operator+(Bulto b1, Bulto b2);  // suma dos bultos y regresa un nuevo Bulto
		Bulto operator-(int m);  // a un Bulto le resta una cantidad de gramos y regresa el  Bulto modificado
		friend Bulto operator-(Bulto b1, Bulto b2); // a un Bulto le resta otro Bulto y regresa el nuevo Bulto
		bool operator>(Bulto b);  // regresa true/false si el primer Bulto es > que el segundo
		bool operator<(Bulto b); // regresa true/false si el primer Bulto es < que el segundo
		bool operator==(Bulto b); // regresa true/false si ambos Bultos son iguales
};

//Constructores
Bulto::Bulto(){
 kilos=0;
 gramos=0;
}

Bulto::Bulto(int k){
	kilos = k;
	gramos = 0;
}

Bulto::Bulto(int k, int g){
	kilos = k;
	gramos = g;
}

//M�todos de modificaci�n
void Bulto::setKilo(int k){
    kilos=k;
}

void Bulto::setGramo(int g){
    gramos=g;
}

//M�todos de acceso
int Bulto::getKilo(){
    return kilos;
}

int Bulto::getGramo(){
    return gramos;
}

//M�todos de operaci�n
void Bulto::muestra(){
    cout<<kilos<<" kg con "<<gramos<< " gramos"<<endl;
}

//////////////////////////////////////////
//COMPLETA EL C�DIGO QUE FALTA
//////////////////////////////////////////

// incrementa un gramo al bulto opcion uno
void Bulto :: operator++(int b){
    gramos++;
    if(gramos >= 1000){
        gramos -=1000;
        kilos++;
    }
}

// decrementa un gramo al bulto opcion 2
void operator--(Bulto &b,int a){
    b.gramos -= 1;
    if(b.gramos < 0){
        b.gramos += 1000;
        b.kilos--;
    }
}

// suma la cantidad de gramos recibidos en m al bulto y regresa el bulto modificado opcion 3
Bulto Bulto :: operator+(int m){
    int gR = gramos + m;
    if(gR >= 1000){
        gR -= 1000;
        kilos++;
    }
    Bulto b(kilos, gR);
    return b;
}

// suma dos bultos y regresa un nuevo Bulto opcion 4
Bulto operator+(Bulto b1, Bulto b2){
    int gR = b1.gramos + b2.gramos;
    int kR = b1.kilos + b2.kilos;
    if(gR >= 1000){
        gR -= 1000;
        kR++;
    }
    Bulto b3(kR, gR);
    return b3;
}

// a un Bulto le resta una cantidad de gramos y regresa el  Bulto modificado opcion 5
Bulto Bulto :: operator-(int m){
    int gR = gramos - m;
    if(gR < 0){
        gR += 1000;
        kilos--;
    }
    Bulto b(kilos, gR);
    return b;
}

// resta dos Bultos y regresa el nuevo Bulto opcion 6
Bulto operator-(Bulto b1, Bulto b2){
    int gR = b1.gramos - b2.gramos;
    int kR = b1.kilos - b2.kilos;
    if(gR < 0){
        gR += 1000;
        kR--;
    }
    Bulto b3(kR, gR);
    return b3;
}

// regresa true/false si el primer Bulto es > que el segundo opcion 7
bool Bulto :: operator>(Bulto b){
    if(kilos > b.kilos)
        return true;
    else if(kilos < b.kilos)
        return false;
    else{
        if(gramos > b.gramos)
            return true;
        else
            return false;
    }
}

// regresa true/false si el primer Bulto es < que el segundo opcion 8
bool Bulto :: operator<(Bulto b){
    if(kilos < b.kilos)
        return true;
    else if(kilos > b.kilos)
        return false;
    else{
        if(gramos < b.gramos)
            return true;
        else
            return false;
    }
}

// regresa true/false si ambos Bultos son iguales opcion 9
bool Bulto :: operator==(Bulto b){
    if(kilos == b.kilos && gramos == b.gramos)
        return true;
    else
        return false;
}

#endif // BULTO_H_INCLUDED
