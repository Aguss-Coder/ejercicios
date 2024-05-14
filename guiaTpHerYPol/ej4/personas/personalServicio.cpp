#include "personalServicio.h"
#include <iostream>

using namespace std;

personalServicio::personalServicio() : Trabajador() {
  seccion = "";
}

personalServicio::personalServicio(string nombre, string apellido, int edad, char genero, int anioIngreso, int nroOficina, string seccion) : Trabajador(nombre, apellido, edad, genero, anioIngreso, nroOficina) {
  this->seccion = seccion;
}

void personalServicio::setSeccion(string seccion) {
  this->seccion = seccion;
}

string personalServicio::getSeccion() {
  return seccion;
}

void personalServicio::mostrarDatos() {
  cout << "Nombre: " << getNombre() << endl;
  cout << "Apellido: " << getApellido() << endl;
  cout << "Año de ingreso: " << getAnioIngreso() << endl;
  cout << "Número de oficina: " << getNroOficina() << endl;
  cout << "Sección: " << seccion << endl;
}

void personalServicio::cambiarSeccion(string nuevaSeccion) {
  setSeccion(nuevaSeccion);
}
