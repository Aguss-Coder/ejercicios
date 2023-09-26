#include <iostream>

using namespace std;

void cargarDatos(int n, int arreglo[]){
    cout << "Ingrese los datos" << endl;
    for (int i = 0; i < n; i++){
        cin >> arreglo[i];
    }
}

void calcularCantidad(int n, int arreglo[], int &cantidad_1, int &cantidad_2, int &cantidad_0){
    for (int i = 0; i < n; i++){
        switch (arreglo[i])
        {
        case 0:
            cantidad_0 ++;
            break;
        case 1:
            cantidad_1 ++;
            break;
        case 2:
            cantidad_2 ++;
            break;
        default:
            break;
        }
    }
    cout << "EL 0 aparece: " << cantidad_0 << " veces" << endl;
    cout << "EL 1 aparece: " << cantidad_1 << " veces" << endl;
    cout << "EL 2 aparece: " << cantidad_2 << " veces" << endl;
}

int main(){
    int cantidad_1 = 0, cantidad_2 = 0, cantidad_0 = 0, n = 0;
    
    cout << "Ingrese el tamaño de los datos" << endl;
    cin >> n;

    int arreglo[n];


    cargarDatos(n, arreglo);

    calcularCantidad(n, arreglo, cantidad_1, cantidad_2, cantidad_0);

    return 0;
}