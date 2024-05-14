#include <iostream>
#include "productos.h"

using namespace std;

class Perecedero : public Producto {
  protected:
    int diasParaVencimiento;
  public:
    Perecedero(string, float, int);
    int getDiasParaVencimiento();
    void reducirPrecio();
};