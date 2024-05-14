#include <iostream>
#include "personas.h"
#include <cctype>

using namespace std;

Persona::Persona() {
  nombre = "";
  apellido = "";
  dni = 0;
  estadoCivil = 's';
}

Persona::Persona(string nombre, string apellido, int dni, char estadoCivil) {
  this->nombre = nombre;
  this->apellido = apellido;
  this->dni = dni;
  this->estadoCivil = estadoCivil;
}

void Persona::setNombre(string nombre) { this->nombre = nombre; }
void Persona::setApellido(string apellido) { this->apellido = apellido; }
void Persona::setDni(int dni) { this->dni = dni; }
void Persona::setEstadoCivil(char estadoCivil) { this->estadoCivil = estadoCivil; }

string Persona::getNombre() { return nombre; }
string Persona::getApellido() { return apellido; }
int Persona::getDni() { return dni; }
char Persona::getEstadoCivil() { return estadoCivil; }

void Persona::cambiarEstadoCivil(char nuevoEstado) {
  estadoCivil = nuevoEstado;
  cout << "Estado civil cambiado a " << estadoCivil << endl;
}