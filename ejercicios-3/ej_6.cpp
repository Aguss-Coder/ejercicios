#include <iostream>

using namespace std;

float suma(float numero_1, float numero_2) {
  return numero_1 + numero_2;
}

float resta(float numero_1, float numero_2) {
  return numero_1 - numero_2;
}

float multiplicacion(float numero_1, float numero_2) {
  return numero_1 * numero_2;
}

float division(float numero_1, float numero_2) {
    return numero_1 / numero_2;
}

int main() {
  float numero_1, numero_2, result;
  int contador;

  cout << "Que operacion quiere realizar:\n[1] Suma   [2] Resta" << endl;
  cout << "[3] Multiplicacion   [4] Division" << endl;
  cin >> contador;

  switch (contador)
  {
  case 1:
    cout << "Ingrese el primer numero a operar: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero a operar: ";
    cin >> numero_2;
    
    result = suma(numero_1,numero_2);
    cout << "El resultado de la suma es: " << result << endl;
    break;
  case 2:
    cout << "Ingrese el primer numero a operar: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero a operar: ";
    cin >> numero_2;

    result = resta(numero_1, numero_2);
    cout << "El resultado de la resta es: " << result << endl;
    break;
  case 3:
    cout << "Ingrese el primer numero a operar: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero a operar: ";
    cin >> numero_2;

    result = multiplicacion(numero_1, numero_2);
    cout << "El resultado de la multiplicacion es: " << result << endl;
    break;
  case 4:
    cout << "Ingrese el primer numero a operar: ";
    cin >> numero_1;
    cout << "Ingrese el segundo numero a operar: ";
    cin >> numero_2;

    if (numero_2 == 0) {
      cout << "No se puede dividir por cero" << endl;
      main();
    } else {
      result = division(numero_1, numero_2);
      cout << "El resultado de la division es: " << result << endl;
    }
    break;
  default:
    cout << "No se reconoce como una opcion" << endl;
    break;
  }

  return 0;
}