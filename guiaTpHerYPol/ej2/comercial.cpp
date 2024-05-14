#include "comercial.h"
#include <iostream>

using namespace std;

Comercial::Comercial(): comision(0) {}

void Comercial::setComision(double comision) {
  this->comision = comision;
}

double Comercial::getComision() {
  return comision;
}

void Comercial::toString() {
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
  cout << "Salario: " << salario << endl;
  cout << "Comision: " << comision << endl;
}

void Comercial::plus() {
  if (edad > 30 && comision > 12) salario += 3000;
  else salario += 0;
}