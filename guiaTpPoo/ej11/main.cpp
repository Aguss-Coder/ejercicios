#include <iostream>
#include "data.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Conjunto conjunto1(5);
  conjunto1.agregar(1);
  conjunto1.agregar(2);
  conjunto1.agregar(3);

  Conjunto conjunto2(5);
  conjunto2.agregar(3);
  conjunto2.agregar(4);
  conjunto2.agregar(5);

  Conjunto unionConjuntos = conjunto1 + conjunto2;
  Conjunto interseccionConjuntos = conjunto1 * conjunto2;
  Conjunto diferenciaConjuntos = conjunto1 - conjunto2;

  cout << "Union: ";
  unionConjuntos.mostrar();

  cout << "Interseccion: ";
  interseccionConjuntos.mostrar();

  cout << "Diferencia: ";
  diferenciaConjuntos.mostrar();

  return 0;
}
