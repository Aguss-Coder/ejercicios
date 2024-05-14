#ifndef FIG_GEO_H
#define FIG_GEO_H

#include <iostream>

using namespace std;

class Fig_Geo {
  protected:
    double x, y;
  public:
    Fig_Geo(double x, double y);
    virtual double area() = 0;
    virtual double perimetro() = 0;
    double razon();
};

#endif