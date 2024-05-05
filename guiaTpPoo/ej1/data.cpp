#include <iostream>
#include "data.h"

using namespace std;

Fecha::Fecha(int pDia, int pMes, int pAnio) {
  dia = pDia;
  mes = pMes;
  anio = pAnio;
}

Fecha::Fecha() {
  dia = 1;
  mes = 1;
  anio = 1900;
}

void Fecha::setDia(int &pDia) {
  cin >> pDia;
}

void Fecha::setMes(int &pMes) {
  cin >> pMes;
}

void Fecha::setAnio(int &pAnio) {
  cin >> pAnio;
}

int Fecha::getDia() {
  return dia;
}

int Fecha::getMes() {
  return mes;
}

int Fecha::getAnio() {
  return anio;
}

void Fecha::mostrarFecha() {
  if (dia < 10 && mes < 10) {
    cout << "0" << dia << "/0" << mes << "/" << anio << endl;
  } else {
    cout << "Fecha: " << dia << "/" << mes << "/" << anio << endl;
  }
  
}