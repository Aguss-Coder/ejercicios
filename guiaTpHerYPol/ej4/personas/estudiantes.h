#include <iostream>
#include "../personas.h"

using namespace std;

class Estudiante : public Persona {
  private:
    string curso;
  public:
    Estudiante();
    Estudiante(string, string, int, char, string);
    void setCurso(string);
    string getCurso();
    void mostrarDatos() override;
    void matriculaNueva(string);
};