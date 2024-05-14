#include "trabajadores.h"
#include <iostream>

using namespace std;

class personalServicio : public Trabajador {
  private:
    string seccion;
  public:
    personalServicio();
    personalServicio(string, string, int, char, int, int, string);
    void setSeccion(string);
    string getSeccion();
    void mostrarDatos() override;
    void cambiarSeccion(string);
};