#include "fig_geo.h"

class Circulo : public Fig_Geo {
  private:
    double radio;
  public:
    Circulo(double x, double y, double radio);
    double area() override;
    double perimetro() override;
};