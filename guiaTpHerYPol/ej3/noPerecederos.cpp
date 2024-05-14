#include <iostream>
#include "noPerecederos.h"

using namespace std;

NoPerecedero::NoPerecedero(string nombre, float precio) : Producto(nombre, precio) {
  tipo = "No perecedero";
}

