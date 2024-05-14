#include <iostream>
#include "comercial.h"
#include "repartidor.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Comercial c1;
  Repartidor r1;

  c1.setNombre("Juan");
  c1.setEdad(35);
  c1.setSalario(2000);
  c1.setComision(15);

  r1.setNombre("Pedro");
  r1.setEdad(20);
  r1.setSalario(1500);
  r1.setZona(3);

  c1.toString();
  c1.plus();

  r1.toString();
  r1.plus();

  return 0;
}
