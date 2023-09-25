#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<float> carga() {
    int grado;
    vector<float> polinomio;

    cout << "Ingrese el grado del polinomio" << endl;
    cin >> grado;

    cout << "Ingrese los coeficientes del polinomio en orden ascendente" << endl;

    for (int i = 0; i <= grado; i++){
        float coeficiente;
        cin >> coeficiente;
        polinomio.push_back(coeficiente);
    }
    return polinomio;
}

void calculo(vector<float> polinomio) {
    float valor = 0;
    float resultado = 0;
    cout << "Ingrese el valor de X para devolver el resultado: ";
    cin >> valor;

    for (int i = polinomio.size(); i >= 0; i--){
        resultado = resultado + (polinomio[i] * pow(valor, i));
    }
    cout << "El resultado es: " << resultado;
}

int main() {
    vector<float> polinomio;
    polinomio = carga();
    calculo(polinomio);
    return 0;
}