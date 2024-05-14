#include "fig_geo.h"

Fig_Geo::Fig_Geo(double x, double y) {
  this->x = x;
  this->y = y;
}

double Fig_Geo::razon() {
  return area() / perimetro();
}