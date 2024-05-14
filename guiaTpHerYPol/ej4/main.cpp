#include <iostream>
#include "personas/estudiantes.h"
#include "personas/profesores.h"
#include "personas/personalServicio.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Estudiante estudiante1("Agustin", "Luduena", 45699481, 's', "Analisis II");
  Profesor profesor1("Juan", "Perez", 12345678, 'c', 2010, 123, "Matematica");
  personalServicio personal1("Maria", "Gomez", 12345678, 'c', 2010, 123, "Limpieza");

  estudiante1.mostrarDatos();
  cout << endl;
  profesor1.mostrarDatos();
  cout << endl;
  personal1.mostrarDatos();
  cout << endl;

  estudiante1.matriculaNueva("Analisis III");
  profesor1.cambiarDepartamento("Fisica");
  personal1.cambiarSeccion("Mantenimiento");

  estudiante1.mostrarDatos();
  cout << endl;
  profesor1.mostrarDatos();
  cout << endl;
  personal1.mostrarDatos();
  cout << endl;

  profesor1.reasignarOficina(321);
  personal1.reasignarOficina(322);

  profesor1.mostrarDatos();
  cout << endl;
  personal1.mostrarDatos();
  cout << endl;

  return 0;
}