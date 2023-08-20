#include <iostream>

using namespace std;

int main() {
  float temperature;

  cout << "Put the temperature: ";
  cin >> temperature;

  if (temperature > 80) {
    cout << "¡WARNING! The temperature is above 80 °C." << endl;
  } else {
    cout << "The temperature is safe." << endl;
  }

  return 0;
}