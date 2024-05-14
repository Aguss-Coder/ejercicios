#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <iostream>

using namespace std;

class Empleado {
  protected:
    string nombre;
    int edad;
    double salario;
  public:
    Empleado();
    void setNombre(string);
    void setEdad(int);
    void setSalario(double);
    string getNombre();
    int getEdad();
    double getSalario();
    virtual void toString() = 0;
    virtual void plus() = 0;
};

#endif