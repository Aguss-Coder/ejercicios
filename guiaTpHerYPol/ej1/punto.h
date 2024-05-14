#include <iostream>
#include "fig_geo.h"

using namespace std;

class Punto : public Fig_Geo {
  public:
    Punto(double x, double y);
    double area() override;
    double perimetro() override;
};