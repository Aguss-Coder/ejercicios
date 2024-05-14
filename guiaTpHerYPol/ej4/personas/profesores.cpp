#include "profesores.h"
#include <iostream>

using namespace std;

Profesor::Profesor() : Trabajador() {
  departamento = "";
}

Profesor::Profesor(string nombre, string apellido, int edad, char genero, int anioIngreso, int nroOficina, string departamento) : Trabajador(nombre, apellido, edad, genero, anioIngreso, nroOficina) {
  this->departamento = departamento;
}

void Profesor::setDepartamento(string departamento) {
  this->departamento = departamento;
}

string Profesor::getDepartamento() {
  return departamento;
}

void Profesor::mostrarDatos() {
  cout << "Nombre: " << getNombre() << endl;
  cout << "Apellido: " << getApellido() << endl;
  cout << "Año de ingreso: " << getAnioIngreso() << endl;
  cout << "Número de oficina: " << getNroOficina() << endl;
  cout << "Departamento: " << departamento << endl;
}

void Profesor::cambiarDepartamento(string nuevoDepartamento) {
  setDepartamento(nuevoDepartamento);
}
