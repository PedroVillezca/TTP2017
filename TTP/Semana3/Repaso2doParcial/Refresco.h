#ifndef REFRESCO_H_INCLUDED
#define REFRESCO_H_INCLUDED

class Refresco : public Envase{
  private:
      int azucar;
      int calorias;
  public:
      Refresco();
      Refresco(Capacidad c, string t, int a, int cal);
      void desplegar();
      int getAzucar();
      int getCalorias();
};

Refresco :: Refresco() : Envase(){
    azucar = 0;
    calorias = 0;
}

Refresco :: Refresco(Capacidad c, string t, int a, int cal) : Envase(c, t){
    azucar = a;
    calorias = cal;
}

int Refresco :: getAzucar(){
    return azucar;
}

int Refresco :: getCalorias(){
    return calorias;
}

void Refresco :: desplegar(){
    Envase::desplegar();
    cout << "Ademas es un refresco con " << azucar << "g de azucar y " << calorias << " calorias." << endl;
}

ostream& operator<<(ostream &os, Refresco r){
    os << "Capacidad: " << r.getLitros() << "L, " << r.getMililitros() << "mL." << endl;
    os << "Tipo: " << r.getTipo() << endl;
    os << "Azucar: " << r.getAzucar() << "g" << endl;
    os << "Calorias: " << r.getCalorias() << "cal" << endl;
    return os;
}

#endif // REFRESCO_H_INCLUDED
