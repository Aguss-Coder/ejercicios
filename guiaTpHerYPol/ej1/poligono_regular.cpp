#include "poligono_regular.h"
#include "fig_geo.h"
#include <cmath>

using namespace std;

PoligonoRegular::PoligonoRegular(double x, double y, int lados, double longitud) : Fig_Geo(x, y) {
  this->lados = lados;
  this->longitud = longitud;
}

double PoligonoRegular::area() {
  return (lados * pow(longitud, 2)) / (4 * tan(M_PI / lados));
}

double PoligonoRegular::perimetro() {
  return lados * longitud;
}