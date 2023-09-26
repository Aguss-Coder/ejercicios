#include <iostream>

using namespace std;

void ingresarELementos(float matriz[3][3]){
    cout << "Ingrese los valores de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
}

void dividirElementos(int val, float matriz[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = (matriz[i][j] / val);
        }
    }
}

void crearArreglo(float matriz[3][3], float arreglo[], int &contador){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] < 1){
                arreglo[contador] = matriz[i][j];
                contador++;
            }
        }
    }
}

void mostarMatriz(float matriz[3][3]){
    cout << "La matriz modificada es: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void mostarArreglo(float arreglo[], int contador){
    cout << "El arreglo generado es:" << endl;
    for (int i = 0; i < contador; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    int val = 0, contador = 0;
    float arreglo[contador];
    float matriz[3][3];

    ingresarELementos(matriz);

    cout << "Ingrese un valor para operar" << endl;
    cin >> val;

    dividirElementos(val, matriz);
    crearArreglo(matriz, arreglo, contador);
    mostarMatriz(matriz);
    mostarArreglo(arreglo, contador);

    return 0;
}