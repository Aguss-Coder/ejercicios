#include <iostream>
#include "empleados.h"

using namespace std;

class Comercial : public Empleado {
  protected:
    double comision;
  public:
    Comercial();
    void setComision(double);
    double getComision();
    void toString();
    void plus();
};