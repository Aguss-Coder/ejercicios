#include <iostream>
#include "repartidor.h"

using namespace std;

Repartidor::Repartidor(): zona(0) {}

void Repartidor::setZona(int zona) {
  this->zona = zona;
}

int Repartidor::getZona() {
  return zona;
}

void Repartidor::toString() {
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
  cout << "Salario: " << salario << endl;
  cout << "Zona: " << zona << endl;
}

void Repartidor::plus() {
  if (edad < 25 && zona == 3) salario += 3000;
  else salario += 0;
}