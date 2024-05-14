#include <iostream>
#include "empleados.h"

using namespace std;

Empleado::Empleado(): nombre(""), edad(0), salario(0) {}

void Empleado::setNombre(string nombre) { this->nombre = nombre; }
void Empleado::setEdad(int edad) { this->edad = edad; }
void Empleado::setSalario(double salario) { this->salario = salario; }

string Empleado::getNombre() { return nombre; }
int Empleado::getEdad() { return edad; }
double Empleado::getSalario() { return salario; }
