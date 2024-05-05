#include <iostream>
#include "data.h"

using namespace std;

void test(int &pDia, int &pMes, int &pAnio) {
  cin >> pDia;
  cin >> pMes;
  cin >> pAnio;
  cout << "Fecha: " << pDia << "/" << pMes << "/" << pAnio << endl;
}

int main(int argc, char const *argv[])
{
  int pDia, pMes, pAnio = 0;

  Fecha sinFecha;

  sinFecha.mostrarFecha();


  cout << "Ingrese el dia: ";
  sinFecha.setDia(pDia);
  cout << "Ingrese el mes: ";
  sinFecha.setMes(pMes);
  cout << "Ingrese el anio: ";
  sinFecha.setAnio(pAnio);
  
  Fecha fecha1(pDia, pMes, pAnio);

  fecha1.mostrarFecha();

  return 0;
}
