#include <iostream>
#include "fig_geo.h"
#include "punto.h"
#include "circulo.h"
#include "poligono_regular.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Punto p(2, 3);
  Circulo c(2, 3, 5);
  PoligonoRegular pr(2, 3, 5, 4);

  cout << "Punto: Perimetro = " << p.perimetro() << ", Area = " << p.area() << ", Razon = " << p.razon() << endl;
  cout << "Circulo: Perimetro = " << c.perimetro() << ", Area = " << c.area() << ", Razon = " << c.razon() << endl;
  cout << "Poligono Regular: Perimetro = " << pr.perimetro() << ", Area = " << pr.area() << ", Razon = " << pr.razon() << endl;

  return 0;
}
