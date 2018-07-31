#ifndef AGUA_H_INCLUDED
#define AGUA_H_INCLUDED

class Agua : public Envase{
  private:
      int sodio;
  public:
      Agua();
      Agua(Capacidad c, string t, int s);
      void desplegar();
      int getSodio();
      friend ostream& operator<<(ostream &os, Agua a);
};

Agua :: Agua() : Envase(){
    sodio = 0;
}

Agua :: Agua(Capacidad c, string t, int s) : Envase(c, t){
    sodio = s;
}

int Agua :: getSodio(){
    return sodio;
}

void Agua :: desplegar(){
    Envase::desplegar();
    cout << "Ademas es de agua con " << sodio << "g de sodio." << endl;
}

ostream& operator<<(ostream &os, Agua a){
    os << "Capacidad: " << a.getLitros() << "L, " << a.getMililitros() << "mL." << endl;
    os << "Tipo: " << a.getTipo() << endl;
    os << "Sodio: " << a.getSodio() << "g" << endl;
    return os;
}

#endif // AGUA_H_INCLUDED
