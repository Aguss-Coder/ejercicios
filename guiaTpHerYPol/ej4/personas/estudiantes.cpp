#include "estudiantes.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante() {
  curso = "";
}

Estudiante::Estudiante(string nombre, string apellido, int dni, char estadoCivil, string curso) : Persona(nombre, apellido, dni, estadoCivil) {
  this->curso = curso;
}

void Estudiante::setCurso(string curso) { this->curso = curso; }

string Estudiante::getCurso() { return curso; }

void Estudiante::mostrarDatos() {
  cout << "Nombre: " << getNombre() << endl;
  cout << "Apellido: " << getApellido() << endl;
  cout << "DNI: " << getDni() << endl;
  cout << "Estado civil: " << getEstadoCivil() << endl;
  cout << "Curso: " << curso << endl;
}

void Estudiante::matriculaNueva(string nuevoCurso) {
  setCurso(nuevoCurso);
}
