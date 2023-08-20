#include <iostream>

using namespace std;

float calcularMontoTotal(float cantidad, float precio, float descuento) {
  float resultado;

  precio = precio - (precio * descuento);
  resultado = cantidad * precio;

  return resultado;
}

int main() {
  float cantidad, precio, descuento;

  cout << "Ingrese la cantidad de productos que compró: " << endl;
  cin >> cantidad;

  if (cantidad < 0) {
    cout << "Como compras cosas negativas?" << endl;
    main();
  } else if (cantidad == 0) {
    cout << "No compraste nada, chau" << endl;
    return 0;
  }

  cout << "Ingrese el precio del producto" << endl;
  cin >> precio;

  if (precio <= 0) {
    cout << "O no pagaste y te lo robaste o hiciste magia y ahora los precios son negativos" << endl;
    main();
  }

  cout << "Ingrese el descuento aplicado al precio" << endl;
  cin >> descuento;

  if (descuento < 0) {
    cout << "Donde vivimos los descuentos negativos no existen." << endl;
    main();
  }

  float resultado = calcularMontoTotal(cantidad, precio, descuento);

  cout << "El total a pagar es de: " << resultado << endl;

  return 0;
}