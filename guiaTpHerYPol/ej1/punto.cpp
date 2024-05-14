#include <iostream>
#include "punto.h"
#include "fig_geo.h"

using namespace std;

Punto::Punto(double x, double y) : Fig_Geo(x, y) {}

double Punto::area() {
  return 0;
}

double Punto::perimetro() {
  return 0;
}