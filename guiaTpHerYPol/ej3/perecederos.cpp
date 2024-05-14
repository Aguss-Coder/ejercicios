#include <iostream>
#include "perecederos.h"

using namespace std;

Perecedero::Perecedero(string nombre, float precio, int diasParaVencimiento): Producto(nombre, precio), diasParaVencimiento(diasParaVencimiento) {}

int Perecedero::getDiasParaVencimiento() {
  return diasParaVencimiento;
}

void Perecedero::reducirPrecio() {
  if (diasParaVencimiento == 1) {
    precio = precio * 0.25;
  } else if (diasParaVencimiento == 2) {
    precio = precio * 0.33;
  } else if (diasParaVencimiento == 3) {
    precio = precio * 0.5;
  }
}