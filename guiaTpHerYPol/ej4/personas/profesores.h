#include "trabajadores.h"
#include <iostream>

using namespace std;

class Profesor : public Trabajador {
  private:
    string departamento;
  public:
    Profesor();
    Profesor(string, string, int, char, int, int, string);
    void setDepartamento(string);
    string getDepartamento();
    void mostrarDatos() override;
    void cambiarDepartamento(string);
};