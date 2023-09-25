#include <iostream>

using namespace std;

void ingresarValores(int fila[], int &total_edades){
    cout << "Ingrese la edad de las personas en la fila" << endl;
    for (int i = 0; i < 14; i++) {
        cin >> fila[i];
        total_edades += fila[i];
    }
}

void imprimirEdades(int mayor_edad, int menor_edad, float promedio_edades){
    cout << "La cantidad de personas mayores de edad es: " << mayor_edad << " años" << endl;
    cout << "La cantidad de personas menores de edad es: " << menor_edad << " años" << endl;
    cout << "El promedio de edades es: " << promedio_edades << " años" << endl;
}

void verificarEdades(int fila[], int &mayor_edad, int &menor_edad){
    for (int i = 0; i < 14; i++) {
      if (fila[i] >= 18) {
        mayor_edad ++;
      }
      else{
        menor_edad ++;
      }
    }
}

int main(){
  int fila[14];
  int total_edades = 0, mayor_edad = 0, menor_edad = 0;

  ingresarValores(fila, total_edades);
  verificarEdades(fila, mayor_edad, menor_edad);

  float promedio_edades = total_edades / 14.0;

  imprimirEdades(mayor_edad, menor_edad, promedio_edades);

  return 0;
}