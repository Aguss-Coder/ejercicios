#include "trabajadores.h"
#include <iostream>

using namespace std;

Trabajador::Trabajador() {
  anioIngreso = 0;
  nroOficina = 0;
}

Trabajador::Trabajador(string nombre, string apellido, int dni, char estadoCivil, int anioIngreso, int nroOficina) : Persona(nombre, apellido, dni, estadoCivil) {
  this->anioIngreso = anioIngreso;
  this->nroOficina = nroOficina;
}

void Trabajador::setAnioIngreso(int anioIngreso) { this->anioIngreso = anioIngreso; }

void Trabajador::setNroOficina(int nroOficina) { this->nroOficina = nroOficina; }

int Trabajador::getAnioIngreso() { return anioIngreso; }

int Trabajador::getNroOficina() { return nroOficina; }

void Trabajador::reasignarOficina(int nuevaOficina) {
  nroOficina = nuevaOficina;
}
