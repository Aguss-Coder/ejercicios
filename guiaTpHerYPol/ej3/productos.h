#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <iostream>

using namespace std;

class Producto {
  protected:
    string nombre;
    float precio;
  public:
    Producto(string, float);
    string getNombre();
    float getPrecio();
    virtual float calcularMonto(int);
};

#endif