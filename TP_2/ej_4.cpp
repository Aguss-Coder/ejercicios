#include<iostream>
using namespace std;

void categorizarNotas(int n, int notas[]) {
    int deficientes = 0, regulares = 0, buenos = 0, excelentes = 0;

    for(int i = 0; i < n; i++) {
        if(notas[i] >= 0 && notas[i] <= 3)
            deficientes++;
        else if(notas[i] >= 4 && notas[i] <= 5)
            regulares++;
        else if(notas[i] >= 6 && notas[i] <= 8)
            buenos++;
        else if(notas[i] >= 9 && notas[i] <= 10)
            excelentes++;
    }

    cout << "Deficientes: " << deficientes << endl;
    cout << "Regulares: " << regulares << endl;
    cout << "Buenos: " << buenos << endl;
    cout << "Excelentes: " << excelentes << endl;
}

int main() {
  int n;
  cout << "Ingrese la cantidad de alumnos: ";
  cin >> n;

  int notas[n];
  
  for(int i = 0; i < n; i++){
    cout << "Ingrese las notas de los alumnos: ";
    cin >> notas[i];
  }

  categorizarNotas(n, notas);

  return 0;
}