#ifndef TRABAJADORES_H
#define TRABAJADORES_H

#include "../personas.h"
#include <iostream>

using namespace std;

class Trabajador : public Persona {
  protected:
    int anioIngreso;
    int nroOficina;
  public:
    Trabajador();
    Trabajador(string, string, int, char, int, int);
    void setAnioIngreso(int);
    void setNroOficina(int);
    int getAnioIngreso();
    int getNroOficina();
    void reasignarOficina(int);
};

#endif