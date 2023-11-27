#ifndef funciones_h
#define funciones_h

#include <iostream>
#include <fstream>

using namespace std;


void cargarDatosMatriz(int matriz[3][3]) {
    ifstream archivo("datos.txt");
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    while (!archivo.eof()) {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                    archivo >> matriz[i][j];
            }
            
        }
        
    }
}

void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplicarMatrizPorEscalar(int matriz_resultante[3][3], int matriz_original[3][3]) {
    int escalar;
    cout << "Ingrese el escalar: ";
    cin >> escalar;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_resultante[i][j] = matriz_original[i][j] * escalar;
        }
    }
}

void menu() {
    int matriz[3][3];
    cargarDatosMatriz(matriz);

    int matriz_resultante[3][3];

    int opcion;

    do {
        cout << "1. Imprimir matriz" << endl;
        cout << "2. Multiplicar por un escalar" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:{
            cout << endl;
            imprimirMatriz(matriz);
            cout << endl;
            break;
        }
        case 2:{
            multiplicarMatrizPorEscalar(matriz_resultante, matriz);
            cout << endl;
            cout << "Matriz resultante: " << endl;
            imprimirMatriz(matriz_resultante);
            cout << endl;
            break;
        }
        case 3:{
            cout << "Saliendo..." << endl;
            break;
        }
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (opcion != 3);
}

#endif /* funciones_h */