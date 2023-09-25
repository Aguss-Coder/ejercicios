#include <iostream>

using namespace std;

// Esta función transforma una medida de tiempo expresada en horas, minutos y segundos con valores arbitrarios en una expresión correcta.
void convert_time(int hours, int minutes, int seconds) {
  // Convertimos los segundos a horas, minutos y segundos.
  int total_seconds = hours * 3600 + minutes * 60 + seconds;

  // Convertimos el total de segundos a una expresión correcta.
  hours = total_seconds / 3600;
  minutes = (total_seconds % 3600) / 60;
  seconds = total_seconds % 60;

  // Devolvemos la expresión correcta.
  cout << "El tiempo en formato correcto es: " << hours << "h " << minutes << "m " << seconds << "s " << endl;
}

int main() {
  // Declaramos las variables para almacenar las horas, minutos y segundos.
  int hours, minutes, seconds;

  // Pedimos al usuario que ingrese las horas, minutos y segundos.
  cout << "Ingrese las horas: ";
  cin >> hours;

  cout << "Ingrese los minutos: ";
  cin >> minutes;

  cout << "Ingrese los segundos: ";
  cin >> seconds;

  // Imprimimos los resultados.
  convert_time(hours, minutes, seconds);

  return 0;
}