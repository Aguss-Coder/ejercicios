#include <iostream>
#include "perecederos.h"
#include "noPerecederos.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Perecedero perecederos("Papas", 100, 5);
  NoPerecedero noPerecederos("Fideos", 1000);

  cout << "Alimento perecedero: " << endl;

  cout << perecederos.getNombre() << " precio: " << perecederos.getPrecio() << ", dias para vencer " << perecederos.getDiasParaVencimiento() << endl;
  cout << "El precio de 2 papas es: " << perecederos.calcularMonto(2) << endl;
  cout << "Reduciendo precio por vencimiento..." << endl;
  perecederos.reducirPrecio();
  cout << "Nuevo precio: " << perecederos.getPrecio() << endl;
  cout << "El precio de 2 papas ahora es: " << perecederos.calcularMonto(2) << endl;

  cout << "Alimento no perecedero: " << endl;

  cout << noPerecederos.getNombre() << " precio: " << noPerecederos.getPrecio() << endl;
  cout << "El precio de 2 paquetes de fideos es: " << noPerecederos.calcularMonto(2) << endl;

  return 0;
}
