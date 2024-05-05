#include <iostream>
#include "data.h"

using namespace std;

Reloj::Reloj() {
  horas = 0;
  minutos = 0;
  segundos = 0;
}

void Reloj::setHoras(int &pHoras) {
  cin >> pHoras;
}

void Reloj::setMinutos(int &pMinutos) {
  cin >> pMinutos;
}

void Reloj::setSegundos(int &pSegundos) {
  cin >> pSegundos;
}

int Reloj::getHoras() {
  return horas;
}

int Reloj::getMinutos() {
  return minutos;
}

int Reloj::getSegundos() {
  return segundos;
}

void Reloj::reset() {
  horas = 0;
  minutos = 0;
  segundos = 0;
}

Reloj& Reloj::operator++() {
  segundos++;
  if (segundos == 60) {
    segundos = 0;
    minutos++;
    if (minutos == 60) {
      minutos = 0;
      horas++;
    }
  }
  return *this;
}