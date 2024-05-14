#include "circulo.h"
#include "fig_geo.h"
#include <cmath>

using namespace std;

Circulo::Circulo(double x, double y, double radio) : Fig_Geo(x, y) {
  this->radio = radio;
}

double Circulo::area() {
  return M_PI * pow(radio, 2);
}

double Circulo::perimetro() {
  return 2 * M_PI * radio;
}