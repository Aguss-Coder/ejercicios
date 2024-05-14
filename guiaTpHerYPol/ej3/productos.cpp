#include <iostream>
#include "productos.h"

using namespace std;

Producto::Producto(string nombre, float precio): nombre(nombre), precio(precio) {}

string Producto::getNombre() {
  return nombre;
}

float Producto::getPrecio() {
  return precio;
}

float Producto::calcularMonto(int cantidad) {
  return precio * cantidad;
}