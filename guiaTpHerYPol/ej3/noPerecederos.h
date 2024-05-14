#include <iostream>
#include "productos.h"

using namespace std;

class NoPerecedero : public Producto {
  protected:
    string tipo;
  public:
    NoPerecedero(string, float);
};