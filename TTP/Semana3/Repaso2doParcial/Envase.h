#ifndef ENVASE_H_INCLUDED
#define ENVASE_H_INCLUDED

class Envase{
  protected:
      Capacidad contenido;
      string tipo;
  public:
      Envase();
      Envase(Capacidad c, string t);
      void setContenido(Capacidad c);
      void setTipo(string t);
      string getTipo();
      Capacidad getContenido();
      void desplegar();
      int getLitros();
      int getMililitros();

      friend Envase operator+(Envase e, Envase e2);
      friend Envase operator-(Envase e, Envase e2);
      friend bool operator>(Envase e, Envase e2);
      friend bool operator<(Envase e, Envase e2);
      friend ostream& operator<<(ostream &os, Envase e);
};

Envase :: Envase(){
    contenido.setLitros(0);
    contenido.setMililitros(0);
    tipo = "";
}

Envase :: Envase(Capacidad c, string t){
    contenido.setLitros(c.getLitros());
    contenido.setMililitros(c.getMililitros());
    tipo = t;
}

void Envase :: setContenido(Capacidad c){
    contenido.setLitros(c.getLitros());
    contenido.setMililitros(c.getMililitros());
}

void Envase :: setTipo(string t){
    tipo = t;
}

string Envase :: getTipo(){
    return tipo;
}

Capacidad Envase :: getContenido(){
    return contenido;
}

int Envase :: getLitros(){
    return contenido.getLitros();
}

int Envase :: getMililitros(){
    return contenido.getMililitros();
}

void Envase :: desplegar(){
    cout << "El envase de tipo " << tipo << " tiene una capacidad de " << contenido.getLitros() << "L y " << contenido.getMililitros() << "mL." << endl;
}

Envase operator+(Envase e, Envase e2){
    int lR = e.getLitros() + e2.getLitros();
    int mR = e.getMililitros() + e2.getMililitros();
    if(mR > 1000){
        mR -= 1000;
        lR++;
    }
    return Envase(Capacidad(lR, mR), "");
}

Envase operator-(Envase e, Envase e2){
    int lR = e.getLitros() - e2.getLitros();
    int mR = e.getMililitros() - e2.getMililitros();
    if(mR < 0){
        mR += 1000;
        lR--;
    }
    return Envase(Capacidad(lR, mR), "");
}

bool operator>(Envase e, Envase e2){
    if(e.getLitros() > e2.getLitros())
        return true;
    else{
        if(e.getMililitros() > e2.getMililitros())
            return true;
        else
            return false;
    }
}

bool operator<(Envase e, Envase e2){
    if(e.getLitros() < e2.getMililitros())
        return true;
    else{
        if(e.getMililitros() < e2.getMililitros())
            return true;
        else
            return false;
    }
}

ostream& operator<<(ostream &os, Envase e){
    os << "Capacidad: " << e.getLitros() << "L, " << e.getMililitros() << "mL." << endl;
    os << "Tipo: " << e.getTipo() << endl;
    return os;
}
#endif // ENVASE_H_INCLUDED
