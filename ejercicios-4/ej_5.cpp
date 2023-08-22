#include <iostream>

using namespace std;

// Esta función recibe las edades y los nombres de dos mujeres, e implementa una función que devuelve el nombre de la madre
string getMotherName(int age1, string name1, int age2, string name2) {
  if (age1 > age2) {
    return name1;
  } else {
    return name2;
  }
}

int main() {
  // Solicitamos al usuario que ingrese las edades y los nombres de dos mujeres
  int age1, age2;
  string name1, name2;

  cout << "Ingrese la edad de la primera mujer: ";
  cin >> age1;

  cout << "Ingrese el nombre de la primera mujer: ";
  cin >> name1;

  cout << "Ingrese la edad de la segunda mujer: ";
  cin >> age2;

  cout << "Ingrese el nombre de la segunda mujer: ";
  cin >> name2;

  // Llamamos a la función para obtener el nombre de la madre
  string motherName = getMotherName(age1, name1, age2, name2);

  // Imprimimos el nombre de la madre
  cout << "La madre es " << motherName << endl;

  return 0;
}