#ifndef CAPACIDAD_H_INCLUDED
#define CAPACIDAD_H_INCLUDED

class Capacidad{
  private:
      int litros;
      int mililitros;
  public:
      Capacidad();
      Capacidad(int l, int m);
      void setLitros(int l);
      void setMililitros(int m);
      int getLitros();
      int getMililitros();
};

Capacidad :: Capacidad(){
    litros = 0;
    mililitros = 0;
}

Capacidad :: Capacidad(int l, int m){
    litros = l;
    mililitros = m;
}

void Capacidad :: setLitros(int l){
    litros = l;
}

void Capacidad :: setMililitros(int m){
    mililitros = m;
}

int Capacidad :: getLitros(){
    return litros;
}

int Capacidad :: getMililitros(){
    return mililitros;
}

#endif // CAPACIDAD_H_INCLUDED
