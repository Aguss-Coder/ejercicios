#include "fig_geo.h"

using namespace std;

class PoligonoRegular : public Fig_Geo {
  private:
    int lados;
    double longitud;
  public:
    PoligonoRegular(double x, double y, int lados, double longitud);
    double area() override;
    double perimetro() override;
};