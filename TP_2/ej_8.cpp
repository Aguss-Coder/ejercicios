#include <iostream>
#include <vector>

using namespace std;

// Declaramos las funciones necesarias.
void leer_nombres_y_edades(vector<string>& nombres, vector<int>& edades);
int contar_alumnos_mayores(vector<int>& edades);
void almacenar_nombres_mayores(vector<string>& nombres, vector<int>& edades, vector<string>& nombres_mayores);
void imprimir_nombres_mayores(vector<string>& nombres_mayores);

int main() {
  // Declaramos los vectores necesarios.
  vector<string> nombres(10);
  vector<int> edades(10);
  vector<string> nombres_mayores;

  // Leemos los nombres y edades de los 10 alumnos.
  leer_nombres_y_edades(nombres, edades);

  // Contamos el número de alumnos mayores de 19 años.
  int numero_alumnos_mayores = contar_alumnos_mayores(edades);

  // Almacenamos los nombres de los alumnos mayores de 19 años.
  almacenar_nombres_mayores(nombres, edades, nombres_mayores);

  // Imprimimos los nombres de los alumnos mayores de 19 años.
  imprimir_nombres_mayores(nombres_mayores);

  return 0;
}

// Función para leer los nombres y edades de los alumnos.
void leer_nombres_y_edades(vector<string>& nombres, vector<int>& edades) {
  for (int i = 0; i < 10; i++) {
    // Pedimos al usuario que ingrese el nombre del alumno.
    cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
    cin >> nombres[i];

    // Pedimos al usuario que ingrese la edad del alumno.
    cout << "Ingrese la edad del alumno " << i + 1 << ": ";
    cin >> edades[i];
  }
}

// Función para contar el número de alumnos mayores de 19 años.
int contar_alumnos_mayores(vector<int>& edades) {
  int numero_alumnos_mayores = 0;
  for (int i = 0; i < 10; i++) {
    if (edades[i] > 19) {
      numero_alumnos_mayores++;
    }
  }
  return numero_alumnos_mayores;
}

// Función para almacenar los nombres de los alumnos mayores de 19 años.
void almacenar_nombres_mayores(vector<string>& nombres, vector<int>& edades, vector<string>& nombres_mayores) {
  for (int i = 0; i < 10; i++) {
    if (edades[i] > 19) {
      nombres_mayores.push_back(nombres[i]);
    }
  }
}

// Función para imprimir los nombres de los alumnos mayores de 19 años.
void imprimir_nombres_mayores(vector<string>& nombres_mayores) {
  cout << "Los alumnos mayores de 19 años son: " << endl;
  for (int i = 0; i < nombres_mayores.size(); i++) {
    cout << nombres_mayores[i] << endl;
  }
}