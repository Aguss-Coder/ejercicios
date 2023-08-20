#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> produccion;

  for (int i = 0; i < 7; i++) {
    int unidad;
    cout << "Enter the production of the day " << i + 1 << ": ";
    cin >> unidad;
    produccion.push_back(unidad);
  }

  int promedio = accumulate(produccion.begin(), produccion.end(), 0) / produccion.size();

  if (promedio > 300) {
    cout << "The average production exceed 300 units." << endl;
  }else if (promedio > 200) {
    cout << "The average production exceed 200 units." << endl;
  }else if (promedio > 100) {
    cout << "The average production exceed 100 units." << endl;
  } else {
    cout << "The average production doesn't exceed 100 units" << endl;
  }

  return 0;
}